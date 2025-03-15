#include <iostream>
#include <type_traits>
#include <typeinfo>

int main() {
    int a = 5;
    const int b = 10;
    int& ref = a;
    const int& cref = b;
    int* ptr = &a;
    const int* cptr = &b;

    // Basic usage
    decltype(a) var1 = 20; // int
    decltype(b) var2 = 30; // const int
    decltype(ref) var3 = a; // int&
    decltype(cref) var4 = b; // const int&
    decltype(ptr) var5 = &a; // int*
    decltype(cptr) var6 = &b; // const int*

    // Using decltype with expressions
    decltype(a + b) var7 = a + b; // int
    decltype((a)) var8 = a; // int& (extra parentheses cause decltype to deduce the type as a reference)

    // Using decltype with functions
    auto func = [](int x) -> int { return x * 2; };
    decltype(func(5)) var9 = func(5); // int

    // Using decltype with std::declval
    struct MyStruct {
        int member;
    };
    // std::declval is used to create a value of type MyStruct without actually constructing it
    decltype(std::declval<MyStruct>().member) var10 = 40; // int

    // Output the types
    std::cout << "var1: " << typeid(var1).name() << std::endl;
    std::cout << "var2: " << typeid(var2).name() << std::endl;
    std::cout << "var3: " << typeid(var3).name() << std::endl;
    std::cout << "var4: " << typeid(var4).name() << std::endl;
    std::cout << "var5: " << typeid(var5).name() << std::endl;
    std::cout << "var6: " << typeid(var6).name() << std::endl;
    std::cout << "var7: " << typeid(var7).name() << std::endl;
    std::cout << "var8: " << typeid(var8).name() << std::endl;
    std::cout << "var9: " << typeid(var9).name() << std::endl;
    std::cout << "var10: " << typeid(var10).name() << std::endl;

    return 0;
}