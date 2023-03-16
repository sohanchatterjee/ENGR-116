//Sohan Chatterjee
//Loops
//ENGR 116
//October 10, 2021
//I pledge my honor that I have abided by the Stevens Honor System.
//Sources: prior knowledge
#include <iostream>
using namespace std;

int main(){
    int userChoice;

    cout<<"Choose a number:";
    cout<<"\n1. 10 Integers";
    cout<<"\n2. Indefinite Integers"<<endl;
    cin>>userChoice;
    if (userChoice==1){
        int userInput, sum, min;
        int max = 0;
        for (int i=0; i<10; i++){
            cout<<"\nEnter a number: ";
            cin>>userInput;
            sum+=userInput;
            if (userInput<min)
                min=userInput;
            if (userInput>max)
                max=userInput;
        }
        cout<<"Sum: "<<sum<<endl;
        cout<<"Minimum input: "<<min<<endl;
        cout<<"Maximum input: "<<max<<endl;
    }
    else if (userChoice==2){
        int userInput, sum, min;
        int max = 0;
        while(userInput!=-1){
            cout<<"\nEnter a number: ";
            cin>>userInput;
            if (userInput==-1){
                cout<<"Sum: "<<sum<<endl;
                cout<<"Minimum input: "<<min<<endl;
                cout<<"Maximum input: "<<max<<endl;
                return 0;
            }
            else{
                sum+=userInput;
                if (userInput<min)
                    min=userInput;
                if (userInput>max)
                    max=userInput;
            }
        }
        cout<<"Sum: "<<sum<<endl;
        cout<<"Minimum input: "<<min<<endl;
        cout<<"Maximum input: "<<max<<endl;     
    }
    else{
        return 0;
    }
}