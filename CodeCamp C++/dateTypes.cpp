/* ***********************************************************
    CodeCamp C++ Course: Data Types

    Author: Walter Hudson

    email: hudson.walterf@gmail.com

    File created and saved 11-1-21
*********************************************************** */

#include <iostream>

using namespace std;

int main()
{
    char grade = 'A'; // Data type "Character"

    string phrase = "Cisco is based, academics is not..."; // Data type "String" or string of characters

    int age = 50; // Data type "Integer" stores a whole number

    float decimal = 10.5; // Data type "Floating Point", allows the use of a decimal with one decimal place

    double otherDecimal = 12.22; // Data Type "Double", allows for multiple decimal places

    bool isMale = true; // Data type "Boolean", allows us to represent info as true or false

    if (isMale == true) // Tests for the the boolean isMale
    {
        cout << "You are a male!" << endl; // If the value is true, prints this line
    } else {
        cout << "You might be female!" << endl; // If the vale is false, prints this line instead
    }

    return 0;
}