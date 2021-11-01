/* ***********************************************************
    Characters and Their Uses

    Author: Walter Hudson, 2021

    email: hudson.walterf@gmail.com

    File created and saved 10-26-21
*********************************************************** */

#include <iostream>

using namespace std;

int main() {

  char character;

  character = 'A';

  cout << character;

  cout << "\n" << "Hello there my friend" << endl;

  cout << "\100" << endl;

  cout << "\x28" << endl;

  return 0;
}
/*
  On line 23, we can see between our standard output command and our string there
  entity "\n". Disregarding the "n" for a moment, the backwards slash (\) is known
  as an escape character. The next character following the "\" will either have
  its functionality removed or, depending on the character, perform a new function
  altogether. In this case the "\n" means "new line." The string following this
  entity will be printed on a seperate line from the initial out command for our
  character variable. Readability OP!
*/

/*
  On lines 25 and 27, we use the escape character in combination with a number (l.25)
  for an octal value on the ASCII table. This will return our character to the terminal
  when prompted to print said character. Below that we can see the similar usage however
  this time we add a lowercase 'x' after the escape character (l.27) for a hex value on
  the ASCII chart. They print the '@' and '(' symbols respectively.
*/

/*
  Characters are essentially any letter, number (contextually speaking), or symbol that
  could be part of a string. We can declare variables with a "char" type and assign it a
  character value.
*/
