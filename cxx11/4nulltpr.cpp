#include <iostream>

// Overloaded functions
void foo(int) {
    std::cout << "Called foo(int)\n";
}

void foo(char*) {
    std::cout << "Called foo(char*)\n";
}

int main() {
    foo(0);     // Calls foo(int), not foo(char*)
    foo(NULL);  // May cause ambiguity in some compilers
    foo(nullptr); // Calls foo(char*) - clear and unambiguous

    return 0;
}
