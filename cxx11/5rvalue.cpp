
/*
Lvalue (&): Represents an object that persists beyond a single expression (has an address).
Rvalue: A temporary object or literal that does not persist beyond the expression.
*/
#include <iostream>
#include <string>

void printValue(const std::string& value) {
    std::cout << "Lvalue: " << value << std::endl;
}

void printValue(std::string&& value) {
    std::cout << "Rvalue: " << value << std::endl;
}

int main() {
    std::string str = "Hello, World!";
    
    // Lvalue reference
    printValue(str);
    
    // Rvalue reference
    printValue("Hello, Rvalue!");

    return 0;
}
