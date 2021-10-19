/* ***********************************************************
    Integers, Values, Variables, Documentation Notes

    Author: Walter Hudson, 2021

    email: hudson.walterf@gmail.com

    Changes:

    File created and saved 10-14-2021
*********************************************************** */




#include <iostream>

using namespace std;

int main() {
    int counter;
    int variable_1, account_balance, invoices;

    counter = 1;

    int variable = 1;

    int twosquared = 2 * 2;

    result = 100 + 200;

    x = x + 1;

    float y = 2.5;

    int i = 13;

    int j = 5;

    int k = i % j;

    cout << k;

}
/*
The variable "y" which we assigned a value of 2.5 is considered a floating
point variable. A floating point number is essential a number with a fractional
part after the decimal. Whenever we specify a number with a decmal, even if the
number after the decimal is 0, say "4.0", this is still a float. Also, when we
want to denote scientific notation, we can use the common mathematical notation,
"E" as in 3E8, which would be 3 * 10^8. We use float when we want to perform
floating point math on variables to return a higher degree of accuracy.
*/

/*
Above is some practice with variables and integers and the assignment
of values. On lines 6 and 7, we see a single integer declared with the
name, "counter", and 3 integers declared in a single line declaration.

Below that, we see that counter has been assigned the value of 1.

We see on line 11 a new integer named "variable" assigned to the 1
on the same line, rather than using two.

On line 13 we declare an integer "twosquared" and assign it the value
of 2 multiplied by 2.

On line 15, we see the variable "result" and set it equal to the sum
of 100 plus 200.

On line 17 we see a variable "x" assigned the value of itself, plus
1. This is useful for creating a counting sequence.

*/

/*
Special note on Keywords! Keywords are words within the C++ syntax that
perform a tasks or have values already assigned to them within the code.
for example, you can't declare an int named "int", you could however,
declare an integer named "Int" as C++ is case sensitive. However, this
is considered incorrect, so it would be better for us to instead write
"int_value" to differentiate.
*/
