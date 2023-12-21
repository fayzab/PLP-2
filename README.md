# PLP-2 Data Types and Naming Conventions

C++ has 95 keywords which have unique meanings defined by the compiler. 


The following are the naming requirements for variables:

Variable names may not be the same as C++ keywords (‘int’, ‘for’, ‘bool’, etc.)

Case sensitivity (‘var1’ and ‘Var1’ are considered as two different variables)

Underscores, letters, or digits, but cannot start with a digit

Naming conventions are standard practice and are not enforced by the compiler. A very commonly followed naming convention is camel case where the variable starts with lowercase letter for the first term and uppercase letter for the second term. 

ex. myDog, myCat


C++ is a statically typed language. Variable types are determined at compile time, this means variables must be declared by the specific data type when being defined. These errors will be caught by the compiler which ensures type safety and better execution in programs. A variable that has been declared earlier in the program may not be assigned to another value later on. 


C++ is a strongly typed programming language as data type declaration for variables must be declared initially and followed through throughout the programs execution. The compiler will check to make sure that each variable is assigned the correct data type and check for possible data type misdeclaration. C++ is an explicitly typed language, as you need to declare the data type of the variable when defining it.



In C++, all variables are mutable by default. However, by using the “const” modifier which initiates that the variables values may not be modified after initially being assigned, variables can be immutable. 


The operators in C++ include:

Arithmetic operators (‘+’ , ‘-’ , ‘*’ , ‘/’ , ‘%’- Modulus )

Logical operators - Booleans -  (‘&&’ - AND , ‘||’ - OR , ‘!’ - NOT)

Relational operators (‘<’ , ‘>’ , ‘==’ - equal to , ‘<=’ - less than or equal to, ‘>= - greater than or equal to’ , ‘!=’ - not equal to)

Bitwise operators - Integers -  (‘&’ - AND , ‘|’ - OR , ‘~’ - NOT , ‘^’ - XOR , ‘<<’ - left shift , ‘>>’ - right shift)

Ternary/conditional operators - ‘?’ returns the value based on the condition

Assignment operators (‘=’ - Assignment , ‘+=’ , ‘-=’ , ‘*=’ , ‘/=’ , ‘%=’ - Compound Assignment)

Pointers - (string *ptr) stores the memory address as its value


In C++ mixed type operations are allowed in which type coercion comes into play. Type coercion is when C++ implicitly converts values from one data type to another. Some examples are listed below:

bool -> char -> short int -> int -> 

unsigned int -> long -> unsigned -> 

long long -> float -> double -> long double


C++ identifier names and operator symbols are bound in the following times:

Variables, Class name, Function name 

Declaration and definition

Operator symbols (‘+’, ‘-’, ‘==’, )

Compilation and runtime 


Simply typing x = “5” + 6 in a C++ program in hopes of the compiler to output 11 is not going to work. The compiler will spit out a bunch of error messages about the lack of data type declarations, the missing #include <iostream> which is needed in every C++ program for inputs and outputs, and the lack of a semicolon at the end of the line of code. In order for this code compile, follow the syntax below; **We declare the variables, convert the string to an integer, then add the total**

#include <iostream>

int main() {
std::string x = "5";
int y = 6;
int total = std::stoi(x) + y; //stoi converts strings to integers
std::cout << "Total = " << total << std::endl;


return 0;
}



C++ is a great programming language and is flexible when dealing with ints and floats, storing different types in lists, and converting between data types. The only limitation of data types is floats. Floats only have a precision up to 7 digits, and cannot exceed this limit. Integers and floats are the most commonly used data types in C++.

std::variant - to store multiple types in a list
std::stoii - string conversions


Sources:
https://www.geeksforgeeks.org/operators-in-cpp/
https://www.geeksforgeeks.org/stdstoi-function-in-cpp/
https://www.freecodecamp.org/news/data-types-in-c-integer-floating-point-and-void-explained/
