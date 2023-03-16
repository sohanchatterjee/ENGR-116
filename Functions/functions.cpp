//Sohan Chatterjee
//Functions
//ENGR 116
//November 07, 2021
//I pledge my honor that I have abided by the Stevens Honor System.
//Sources: prior knowledge
#include <iostream>
using namespace std;

void printGreeting(){
    cout<<"Hope you're having a good day."<<endl;
}
void divideNumbers(float x, float y){
    if(y == 0){
        cout<<"Cannot perform division."<<endl;
    }
    else{
        cout<< x/y << endl;
    }
}
int factorial(int num){
    int returningNum = 1;
    if(num < 0){
        return 0;
    }
    else{
        for(int i = 1; i <= num; i++){
            returningNum = returningNum*i;
        }
        return returningNum;
    }
}
void fibonacci(int N){
    int num1 = 0;
    int num2 = 1;
    int fibonacciNum;
    if (N < 0){
        cout<<"Number must be positive."<<endl;
    }
    else{
        for (int i = 0; i < N; i++){
            if(i<=1){
                fibonacciNum = i;
                cout<<fibonacciNum<<endl;
            }
            else{
                fibonacciNum = num1 + num2;
                num1 = num2;
                num2 = fibonacciNum;
                cout<<fibonacciNum<<endl;
            }
        }
    }
}
int main(){
    printGreeting();
    divideNumbers(3, 2);
    cout<<factorial(5)<<endl;
    fibonacci(10);
    return 0;
}