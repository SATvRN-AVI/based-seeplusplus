/*
Notice the "#" mark in the beginning here. This is referred to as a "Preprocessor directive"
It's function is a seperate part for the compiler to read and then refer off of when it 
compiles the entire program. The compiler first seeks for the directive, in this case it's
the "#include". When the preprocessor meets the direct, it replaces the directive with content
from the specified file, in this case the file is "iostream". The file we wish to include contains the dictionary
for the compiler to draw from, so that it knows the difference between, "cout" the correct syntax, and "cuot"
the incorrect syntax. "iostream" stands for input/output stream, referring to output and input syntax for user
data. 
*/

#include <iostream> 

/*
"namespace" is an abstract grouping of unique entities, which in this case we specify the "std" group. We can use
namespaces to divide our code into logical groups by declaring various types, functions, variables inside of itself. 
"std" is the "standard" entity contain basic facilities for programming, like "cout". If we didn't declare the 
namespace with "std" above, we'd have to specify the "std" entity as a prefix for each command, like "std::cout"
*/

using namespace std;

/* 
Functions, similar to the functions we use in math, allow us to construct logical blocks of code. The items we put
within the function are known as function arguments. The arguments in this case are within the function body, which
is between the "{ }". What we get out of the function are called function results. Out of all the different blocks 
we'll use in our code, the one that will always be present is our function with the title "main". Before the name of 
our function, we have to declare what type of function "main" will be; in this case we use "int" which stands for 
"integer". NOTE: The names of functions are subject to rigid constraints, more on this later. 
*/

int main()
{
    cout << "Hello World!";
    return 0;
}

/*
When we enter the "return" command after our object, we're essentially telling the function we declared to return a
value that's specified by our function-return type (hint: that's the "int" before the function name.) Because our
function is returning a string which we have not assigned any integer value, when we set "return" to "0", our program
will run and will meet the requirements needed for the return type. If we entered 1, that would mean the program
encountered an error.  
*/



/*
The "cout" *object* is an entity that needs to be fed with information that is to be displayed on screen. For this,
we feed this object raw text to be displayed for humans to read. This is known as a "string." The "<<" is called a 
digraph but within our function is known as an "operator", meaning that the characters are performing a requested
operation in conjunction with our object. 
*/

/*
Functions use three sets of info:
    What is the result of the function? (In this case it's "integer")
    What is the name of the function? (We've named the function "main")
    How many arguments does the function accept and what are their names? (No arguments required, they would be
    found between the parentheses after the name)
*/