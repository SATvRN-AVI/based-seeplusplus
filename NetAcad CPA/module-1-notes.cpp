#include <iostream> // Notice the "#" mark in the beginning here. This is referred to as a "Preprocessor directive"
                    // It's function is a seperate part for the compiler to read and then refer off of when it 
                    // compiles the entire program. The compiler first seeks for the preprocessor, in this case 
                    // it's the "include" term, and then searches for directive. The directive in this case is
                    // the "<iostream>"
using namespace std;

int main()
{
    cout << "Hello World!";
    return 0;
}