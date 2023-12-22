//Part 2 of intro C++ tests
//Writing code that creates variable of each of these common data types and follows the naming conventions: 
//int, string, floating-point number, boolean, array/list, map
//With different operations applied on variables of the same data type and operations with variables of two different types

#include <iostream>

int main() {
std::string x = "5";
int y = 6;
int total = std::stoi(x) + y; //stoi converts strings to integers
std::cout << "Total = " << total << std::endl;

return 0;
}
