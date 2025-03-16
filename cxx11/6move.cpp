/*
Copying large objects is inefficient. Move semantics allows transferring ownership of resources instead of copying.
The move constructor is used when an object is initialized from an rvalue, allowing the compiler to transfer ownership of resources rather than creating a copy.
Copy Constructor: Creates a new object by copying another.
Move Constructor: Transfers ownership, leaving the original object in a valid but unspecified state.
*/
#include <iostream>
#include <utility>

class LargeObject {
public:
    int* data;
    size_t size;

    // Constructor
    LargeObject(size_t s) : size(s) {
        data = new int[size];
        std::cout << "Constructed LargeObject of size " << size << std::endl;
    }

    // Destructor
    ~LargeObject() {
        delete[] data;
        std::cout << "Destroyed LargeObject of size " << size << std::endl;
    }

    // Copy Constructor
    LargeObject(const LargeObject& other) : size(other.size) {
        data = new int[size];
        std::copy(other.data, other.data + size, data);
        std::cout << "Copied LargeObject of size " << size << std::endl;
    }

    // Move Constructor
    LargeObject(LargeObject&& other) noexcept : data(nullptr), size(0) {
        data = other.data;
        size = other.size;
        other.data = nullptr;
        other.size = 0;
        std::cout << "Moved LargeObject of size " << size << std::endl;
    }

    // Copy Assignment Operator
    LargeObject& operator=(const LargeObject& other) {
        if (this == &other) return *this;
        delete[] data;
        size = other.size;
        data = new int[size];
        std::copy(other.data, other.data + size, data);
        std::cout << "Copy assigned LargeObject of size " << size << std::endl;
        return *this;
    }

    // Move Assignment Operator
    LargeObject& operator=(LargeObject&& other) noexcept {
        if (this == &other) return *this;
        delete[] data;
        data = other.data;
        size = other.size;
        other.data = nullptr;
        other.size = 0;
        std::cout << "Move assigned LargeObject of size " << size << std::endl;
        return *this;
    }
};

int main() {
    LargeObject obj1(1000);
    LargeObject obj2 = std::move(obj1); // Move constructor
    LargeObject obj3(500);
    obj3 = std::move(obj2); // Move assignment operator
    return 0;
}