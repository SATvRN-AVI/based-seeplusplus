/* ***********************************************************
    Integers, Values, Variables, Documentation Notes

    Author: Walter Hudson, 2021

    email: hudson.walterf@gmail.com

    File created and saved 10-19-21
*********************************************************** */

#include <iostream>

using namespace std;

int main() {

  int i = 1;

  int j = i++;

  cout << j << endl;

  return 0
}

/*
When we place the "++" or some kind of decrement/increment operator BEFORE a value,
we are asking the computer to add or subtract 1 to the value then return it's added
result. If we palce the operator after the value, we're asking the computer to give us
the initial value then add or subtract 1 to the value. 
*/
