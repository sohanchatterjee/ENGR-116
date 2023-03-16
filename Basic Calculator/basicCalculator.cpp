//Sohan Chatterjee
//Basic Calculator
//ENGR 116
//September 26, 2021
//I pledge my honor that I have abided by the Stevens Honor System.
//Sources: prior knowledge

#include <iostream>
using namespace std;

int main(){
    int firstInteger, secondInteger;
    cout<<"\nWelcome to the Calculator. Enter an integer: ";
    cin >> firstInteger;
    cout<<"Enter a second integer: ";
    cin >> secondInteger;

    cout << "Sum: " << (firstInteger + secondInteger);
    cout << "\nDifference: " << (firstInteger - secondInteger);
    cout << "\nProduct: " << (firstInteger * secondInteger);
    cout << "\nQuotient: " << (firstInteger / secondInteger);

    float firstFloat, secondFloat;
    cout<<"\nEnter a float: ";
    cin >> firstFloat;
    cout<<"Enter a second float: ";
    cin >> secondFloat;

    cout << "Sum: " << (firstFloat + secondFloat);
    cout << "\nDifference: " << (firstFloat - secondFloat);
    cout << "\nProduct: " << (firstFloat * secondFloat);
    cout << "\nQuotient: " << (firstFloat / secondFloat);

    string firstString, secondString;
    cout<<"\nEnter a string: ";
    cin >> firstString;
    cout<<"Enter a second string: ";
    cin >> secondString;

    cout << "\n" << (firstString + secondString);

    return 0;
}