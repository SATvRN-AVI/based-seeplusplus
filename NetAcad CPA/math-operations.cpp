/* ***********************************************************
    Integers, Values, Variables, Documentation Notes

    Author: Walter Hudson, 2021

    email: hudson.walterf@gmail.com

    File created and saved 10-19-21
*********************************************************** */




// Below is some basic math using various operators in the C++ language

#include <iostream>

using namespace std;

int main() {

  int a = 3;

  int b = 7;

  int c = 6;

  int i = -100;

  int j = -i; // The unary minus will affect the already negative value to make a positive

  int x = 100;

  int y = +x; // The unary plus, "+x", works to preserve the sign

  int q = 10;

/*
  On lines 28 and 30, we've assigned a value to a variable then declared that variable as a negative. The way
  we assign this sign is known as a "unary minus". The compiler expects the minus in this case to be in one
  side of the argument, the right side. On lines 32 and 34 we've assigned a value to "x" and then below that
  we use a "unary plus". Both signs used in this way perserve the a sign we wish to persist through various
  mathematical sequences.
*/

  cout << a + b << endl; // Adding integer a and b

  cout << a * b << endl; // Multiplying a and b

  cout << c / a << endl; // Dividing c and a

  cout << b - c << endl; // Subtracting b and c

  cout << j << endl; // Displays the value we assigned to j above

  cout << y << endl; // Displays the value we assigned to y above

  cout << ++q << endl; // Displays the value of q if it was incremented by 1

  cout << --q << endl; // Displays the value of q if it was decremented by 1

  return 0;

}
