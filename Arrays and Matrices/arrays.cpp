//Sohan Chatterjee
//Arrays
//ENGR 116
//October 16, 2021
//I pledge my honor that I have abided by the Stevens Honor System.
//Sources: prior knowledge
#include <iostream>
using namespace std;

int main(){
    int numbers[10];
    int sum, min;
    int max = 0;
    for (int i = 0; i < 10; i++){
        cout<<"\nEnter a number: ";
        cin>>numbers[i];
    }
    for (int i = 0; i < 10; i++){
        sum += numbers[i];
        if (numbers[i]<min)
             min=numbers[i];
        if (numbers[i]>max)
            max=numbers[i];
    }
    cout<<"Sum: "<<sum<<endl;
    cout<<"Minimum input: "<<min<<endl;
    cout<<"Maximum input: "<<max<<endl;
    
    return 0;
}