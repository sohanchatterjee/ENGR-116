//Sohan Chatterjee
//Contact Book
//ENGR 116
//November 14, 2021
//I pledge my honor that I have abided by the Stevens Honor System.
//Sources: lecture notes and recitation code
#include <iostream>
#include <fstream>
using namespace std;

void addContact(){
    ofstream myFile;
    string first, last, email, phone;

    myFile.open("contacts.txt", ios::app);
    cout << "Please enter First name, Last name, Email, and Phone Number"<< endl;
    cout << "First Name: "; 
    cin >> first;
    myFile << first << " ";
    cout << "\nLast Name: ";
    cin >> last;
    myFile << last << ", ";
    cout << "\nEmail: ";
    cin >> email;
    myFile << email << ", ";
    cout << "\nPhone Number: ";
    cin >> phone;
    myFile << phone << endl;
    myFile.close();
}

void searchContact(){
    ifstream reader;

    string substring, line;
    bool isFound = false;
    string variable;

    cout << "Who would you like to search for?: ";
    cin >> variable;
    cout << endl;

    reader.open("contacts.txt");

    if (reader.is_open()) {
        while (getline(reader, line)){
            substring = line.substr(0, line.find(" "));
            if (variable == substring){
                cout << line << endl;
                isFound = true;
            }
        }
        if (!isFound) {
            cout << "Contact not found" << endl;
        }
    }
    else {
        cout << "File not found." << endl;
    }

    reader.close();
}

void displayContacts(){
    ifstream reader;
    string line;

    reader.open("contacts.txt");

    while(getline(reader, line)){
        cout << line << endl;
    }

    reader.close();
}

int exit(){
    return 0;
}

int main(){
    bool loop = true;
    int choice;
    while(loop){
        cout << "1. Make Contact\n2. Search Contact\n3. Display All Contacts\n4. Exit" << endl;
        cin >> choice;

        switch (choice){
            case 1:
            addContact();
            break;
            
            case 2:
            searchContact();
            break;

            case 3:
            displayContacts();
            break;

            case 4:
            loop = false;
            break;

            default:
            cout << "Please enter a valid choice" << endl;
            break;
        }
    }
    cout<<"You're next"<<endl;
    cout<<"Sohan"<<endl;
    return 0;
}