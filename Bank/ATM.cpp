//Sohan Chatterjee
//ATM
//ENGR 116
//December 05, 2021
//I pledge my honor that I have abided by the Stevens Honor System.
//Sources: prior knowledge
#include <iostream>
#include <stdlib.h>
using namespace std;
class ATMMachine{
    public:
        int currentBal;
        ATMMachine(int startingAmt){
            currentBal = startingAmt;
        }
        void depositCash(int depositAmt){
            if (depositAmt >= 100)
                cout << "\nDeposit amount too high.";
            else if (depositAmt < 0)
                cout << "\nDeposit cannot be negative.";
            else
                currentBal += depositAmt;
        }
        void depositCheck(int depositAmt){
            if (depositAmt < 0)
                cout << "\nDeposit cannot be negative.";
            else
                currentBal += depositAmt;
        }
        void withdraw(int withdrawal){
            if (withdrawal > 200)
                cout << "\nWithdrawals cannot exceed $200.";
            else{
                if ((withdrawal % 20) == 0)
                    currentBal -= withdrawal;
                else   
                    cout << "\nWithdrawals must be in increments of $20.";
            }
        }
        void checkBalance(){
            cout << "\nBalance: $" << currentBal << endl;
        }
};

int main(){
    ATMMachine myMachine(1000);
    bool run = true;
    int choice, amt;
    while (run){
        cout << "\n1. Make Cash Deposit\n2. Make Check Deposit\n3. Withdraw\n4. Check Balance\n5. Exit" << endl;
        cin >> choice;
        switch (choice){
            case 1:
            cout << "Enter an amount to deposit: ";
            cin >> amt;
            myMachine.depositCash(amt);
            break;
            
            case 2:
            cout << "Enter an amount to deposit: ";
            cin >> amt;
            myMachine.depositCheck(amt);
            break;

            case 3:
            cout << "Enter an amount to withdraw: ";
            cin >> amt;
            myMachine.withdraw(amt);
            break;

            case 4:
            myMachine.checkBalance();
            break;

            case 5:
            run = false;
            break;

            default:
            cout << "Please enter a valid choice" << endl;
            break;
        }
    }
}