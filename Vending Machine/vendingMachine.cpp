//Sohan Chatterjee
//Vending Machine
//ENGR 116
//November 20, 2021
//I pledge my honor that I have abided by the Stevens Honor System.
//Sources: lecture notes and given code
#include <iostream>
#include <stdlib.h>
using namespace std;

///this is a function
int exitP(int x){

    cout<<"\nWould you like to exit the program? [1 -> yes :: 2 -> no]: " ;
    cin>>x;

    ///this is a switch
    switch(x){
        case 1: 
            cout<<"Goodbye!";
            exit(EXIT_SUCCESS);
            break;
        case 2: 
            return x;
            break;
        default: 
            cout<<"Please enter numbers 1-2 only. ";
            exitP(x);
            break;
    }
    return 0;
}
int admin(){
    return 10;
}
int main(){

    double product1 = 2.00;
    double product2 = 0.75;
    double product3 = 3.25;
    double product4 = 1.25;
    double customerMoney = 0.00;

    int prod1Amt = 10;
    int prod2Amt = 10;
    int prod3Amt = 10;
    int prod4Amt = 10;

    int exitProgram = 1;

    cout << "How much money do you have? ";
    cin >> customerMoney;

    while (exitProgram == 1){
        int customerChoice = 0;

        cout << "Which product would you like to buy?\n Enter '1' for Bottled Soda ($2.00)\n Enter '2' for Small Chips ($0.75)\n Enter '3' for RedBull ($3.25)\n Enter '4' for Bottled Water ($1.25)\n Enter '5' to restock all items."
        <<"\n\nChoice: ";
        cin >> customerChoice;
        if (customerChoice == 1){
            cout << "You have selected Bottled Soda\n";
            if (prod1Amt <= 0){
                cout<<"\nThis item is out of stock.";
            }
            else{
                if (customerMoney - product1 < 0){
                    cout << "\nYou don't have enough money to purchase this. You've been refunded.";
                }
                else{
                    customerMoney = customerMoney - product1;
                    prod1Amt--;
                }
                cout<<"\nThere are " << prod1Amt << " units left.";
            }
            cout << "You have $" << customerMoney << " left\n";

            ///this is what a function is used for
            exitP(exitProgram);
        }
        else if (customerChoice == 2){
            cout << "You have selected Small Chips\n";
            if (prod2Amt <= 0){
                cout<<"\nThis item is out of stock.";
            }
            else{
                if (customerMoney - product2 < 0){
                    cout << "\nYou don't have enough money to purchase this. You've been refunded.";
                }
                else{
                    customerMoney = customerMoney - product2;
                    prod2Amt--;
                }
                cout<<"\nThere are " << prod2Amt << " units left.";
            }
            cout << "You have $" << customerMoney << " left\n";

            ///this is what a function is used for
            exitP(exitProgram);
        }
        else if (customerChoice == 3){
            cout << "You have selected RedBull \n";
            if (prod3Amt <= 0){
                cout<<"\nThis item is out of stock.";
            }
            else{
                if (customerMoney - product3 < 0){
                    cout << "\nYou don't have enough money to purchase this. You've been refunded.";
                }
                else{
                    customerMoney = customerMoney - product3;
                    prod3Amt--;
                }
                cout<<"\nThere are " << prod3Amt << " units left.";
            }
            cout << "You have $" << customerMoney << " left\n";

            ///this is what a function is used for
            exitP(exitProgram);
        }
        else if (customerChoice == 4){
            cout << "You have selected Bottled Water\n";
            if (prod4Amt <= 0){
                cout<<"\nThis item is out of stock.";
            }
            else{
                if (customerMoney - product4 < 0){
                    cout << "\nYou don't have enough money to purchase this. You've been refunded.";
                }
                else{
                    customerMoney = customerMoney - product4;
                    prod4Amt--;
                }
                cout<<"\nThere are " << prod4Amt << " units left.";
            }
            cout << "You have $" << customerMoney << " left\n";

            ///this is what a function is used for
            exitP(exitProgram);
        }
        else if (customerChoice == 5){
            prod1Amt = admin();
            prod2Amt = admin();
            prod3Amt = admin();
            prod4Amt = admin();
            cout<<"\nAll items have been restocked.";
        }
    }

    cin.ignore();
    cin.get();
    return 0;

}