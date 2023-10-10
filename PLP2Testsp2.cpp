#include <iostream>

int main() {
std::string x = "5";
int y = 6;
int total = std::stoi(x) + y; //stoi converts strings to integers
std::cout << "Total = " << total << std::endl;

return 0;
}
