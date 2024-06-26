#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName = "John ";
    string lastName = "Doe";
    //Concatenation
    string fullName = firstName + lastName;
    cout <<"Concatenation"<< fullName;

    //Append
    fullName = firstName.append(lastName);
    cout <<"Append"<< fullName<<endl;

    //Length
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length()<<endl;
    //or
    cout << "The length of the txt string is: " << txt.size()<<endl;

    //Access String
    string myString = "Hello";
    cout <<"First character of string"<< myString[0]<<endl;

    //To print the last character of a string, you can use the following code:
    cout <<"print last character of string = "<< myString[myString.length() - 1]<<endl;

    //at() function	
    cout <<"At 0 = "<< myString.at(0)<<endl;  // First character
    cout <<"At 1 = "<< myString.at(1)<<endl;  // Second character
    cout <<"At last = "<< myString.at(myString.length() - 1)<<endl;  // Last character

    myString.at(0) = 'J';
    cout <<"String changed using at()"<< myString<<endl;  // Outputs Jello

  return 0;
}
