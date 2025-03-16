
/*
The auto keyword in C++ (introduced in C++11) allows the compiler to automatically deduce 
the type of a variable at compile time. 
This simplifies code and improves readability while maintaining strong typing.
*/

#include <iostream>
#include <vector>
#include <map>
#include <typeinfo>

int main() {
    // Case 1: Auto with basic types
    auto i = 42; // int
    auto d = 3.14; // double
    auto c = 'a'; // char
    auto b = true; // bool

    std::cout << "i: " << i << ", type: " << typeid(i).name() << std::endl;
    std::cout << "d: " << d << ", type: " << typeid(d).name() << std::endl;
    std::cout << "c: " << c << ", type: " << typeid(c).name() << std::endl;
    std::cout << "b: " << b << ", type: " << typeid(b).name() << std::endl;

    // Case 2: Auto with pointers
    int x = 10;
    auto ptr = &x; // int*
    std::cout << "ptr: " << *ptr << ", type: " << typeid(ptr).name() << std::endl;

    // Case 3: Auto with STL containers
    std::vector<int> vec = {1, 2, 3, 4, 5};
    auto it = vec.begin(); // std::vector<int>::iterator
    std::cout << "First element in vector: " << *it << ", type: " << typeid(it).name() << std::endl;

    std::map<std::string, int> myMap = {{"one", 1}, {"two", 2}};
    auto mapIt = myMap.begin(); // std::map<std::string, int>::iterator
    std::cout << "First element in map: " << mapIt->first << " -> " << mapIt->second << ", type: " << typeid(mapIt).name() << std::endl;

    // Case 4: Auto with function return types
    auto add = [](auto a, auto b) { return a + b; };
    auto sum = add(5, 3.2); // double
    std::cout << "sum: " << sum << ", type: " << typeid(sum).name() << std::endl;

    // Case 5: Auto with range-based for loops
    for (auto val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}