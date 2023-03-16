//Sohan Chatterjee
//Grade Predictor
//ENGR 116
//October 3, 2021
//I pledge my honor that I have abided by the Stevens Honor System.
//Sources: prior knowledge

#include <iostream>
using namespace std;

int main(){
    float hwPct, midPct, finPct, totalGrade, hwAmt, hwSum, midAmt, midSum, finAmt, finSum, hwGrade, midGrade, finGrade;

    cout << "Welcome to the grade predictor.";
    cout << "\nEnter the number of homeworks you would like to include: ";
    cin >> hwAmt;
    cout << "Enter the weight of the homeworks: ";
    cin >> hwPct;
    for (int i = 0; i < hwAmt; i++){
        cout << "Enter a homework grade: ";
        cin >> hwGrade;
        hwSum += hwGrade;
    }
    
    cout << "\nEnter the number of midterms you would like to include: ";
    cin >> midAmt;
    cout << "Enter the weight of the midterms: ";
    cin >> midPct;
    for (int i = 0; i < midAmt; i++){
        cout << "Enter a midterm grade: ";
        cin >> midGrade;
        midSum += midGrade;
    }
    
    cout << "\nEnter the number of finals you would like to include: ";
    cin >> finAmt;
    cout << "Enter the weight of the finals: ";
    cin >> finPct;
    for (int i = 0; i < finAmt; i++){
        cout << "Enter a final grade: ";
        cin >> finGrade;
        finSum += finGrade;
    }

    totalGrade = (((hwSum/hwAmt)*(hwPct/100))+((midSum/midAmt)*(midPct/100))+((finSum/finAmt)*(finPct/100)));
    if (totalGrade >= 91)
        cout << "A: " << totalGrade;
    else if (totalGrade >= 81 && totalGrade <= 90)
        cout << "B: " << totalGrade;
    else if (totalGrade >= 71 && totalGrade <= 80)
        cout << "C: " << totalGrade;
    else
        cout << "D: " << totalGrade;

    return 0;
}