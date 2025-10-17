#include <iostream>
using namespace std;
int spendMoreMoney(int);
char repeatProgram(char);


int spendMoreMoney(int totalCost){
    int subtract;
    char continueProgram;
    cout << "How much will you spend today $"; 
    cin >> subtract; 
    totalCost -= subtract;

    cout << "Your total today is $" << totalCost << endl;
    cout << "Press \"N\" to continue spending or \"Y\" to get Sum: " << endl;
    cin >> continueProgram;

    if(continueProgram != 'y' && continueProgram != 'n'){
        cout << "Invalid print" << endl;
        cout << "Press \"N\" to continue spending or \"Y\" to get Sum: " << endl;
        cin >> continueProgram;
        if(continueProgram != 'y' && continueProgram != 'n'){
            continueProgram = repeatProgram(continueProgram);
        }
    }

    if(continueProgram == 'n' || continueProgram == 'N'){
        totalCost = spendMoreMoney(totalCost);
    }

    if(continueProgram == 'y' || continueProgram == 'Y'){
        return totalCost;
    }

    

    return totalCost;
}

char repeatProgram(char continueProgram){
    cout << "Invalid print" << endl;
    cout << "Press \"N\" to continue spending or \"Y\" to get Sum: " << endl;
    cin >> continueProgram;
    if(continueProgram != 'y' && continueProgram != 'n'){
            continueProgram = repeatProgram(continueProgram);
    }
    return continueProgram;
}