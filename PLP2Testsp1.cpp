//Part 2 of intro C++ tests
//Writing code that creates variable of each of these common data types and follows the naming conventions: 
//int, string, floating-point number, boolean, array/list, map
//With different operations applied on variables of the same data type and operations with variables of two different types

#include <iostream>

int main() {

    std:: string test_string = " Hello World!";
    int test_int = 20;
    float test_float = 04.23;
    bool test_bool = false;

    std:: string animals [3] = {"Cat", "Dog", "Fish"};
    std:: cout << "A lot of people have a " << animals[1] ; 

    if (test_bool == true) {
        std:: cout << "This is a test!";
    } else {
        std::cout << test_string << " My age:" << test_int << " My birthday:" << test_float << test_bool ;
    }

    return 0;
    
    
}  

