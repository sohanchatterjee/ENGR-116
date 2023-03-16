#include <iostream>
#include <windows.h>
using namespace std;

int main(){

        system("Color 01");

        string statements[5] = {"This is the first statement.", 
                            "These statements are in an array.", 
                            "The array consists of five elements.", 
                            "Each element is of type string.", 
                            "This is the final statement in the array."};

    for (int i = 0; i < 5; i++){
        cout<<statements[i]<<endl;
    }

    return 0;
}
