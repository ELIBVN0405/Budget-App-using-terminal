#include <iostream>
#include "calculator.h"
using namespace std;



int main(){
    //print out calculator
    cout << "Welcome to Budget App" << endl;
    int totalCost = 0;
    cout << "Enter in your budget" << endl;
    cin >> totalCost;

    cout << "Your budget today is $"; 
    cout << totalCost << endl;

    cout << "How much will you spend today $"; 
    int spent = 0;
    cin >> spent; 

    totalCost -= spent;

    cout << "Your total today is $" << totalCost << endl;
    cout << "Press \"N\" to continue spending or \"Y\" to get Sum: " << endl;

    char continueProgram;
    cin >> continueProgram;

    if(continueProgram != 'y' && continueProgram != 'n'){
        cout << "Invalid print" << endl;
        cout << "Press \"N\" to continue spending or \"Y\" to get Sum: " << endl;
        cin >> continueProgram;
        if(continueProgram != 'y' && continueProgram != 'n'){
            continueProgram = repeatProgram(continueProgram);
        }
    }

  
    if(continueProgram == 'y' || continueProgram == 'Y'){
        cout << "Your final budget is $" << totalCost;
        return 0;
    }

    if(continueProgram == 'n' || continueProgram == 'N'){
        totalCost = spendMoreMoney(totalCost);
        cout << "Your final budget is $" << totalCost;
        return 0;
    } else {
        
    }

    //else if not n
  
        
    cout << "Your final budget is $" << totalCost;
}

