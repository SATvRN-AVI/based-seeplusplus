/* ***********************************************************
    CodeCamp C++ Course: Variables

    Author: Walter Hudson

    email: hudson.walterf@gmail.com

    File created and saved 11-1-21
*********************************************************** */

#include <iostream>

using namespace std;

int main()
{
  string name_1 = "John"; // Declaration of variable "name_1" with string value "John"
  int age_1; // Declared an integer "age_1"

  age_1 = 70; // Assigned 70 to "age_1"

  cout << "There once was a man named " << name_1 << endl; // Starts story, incorporates variable "name_1"
  cout << "He was " << age_1 << " years old." << endl; // Continues story with his age "age_1"

  name_1 = "Mike"; // Set a new string value to "name_1"
  
  // Notice how the code interprets changes as it runs, the name changes after the new declaration

  cout << "He liked the name " << name_1 << endl;
  cout << "He did not like being " << age_1 << " years old" << endl;

  return 0;
}
