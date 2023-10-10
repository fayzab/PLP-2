//C++ tests

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

