#include <iostream>
int main()
{
    int *ptr = nullptr;
    ptr = new int;
    *ptr = 10;
    int a = 20;
    delete ptr;
    ptr = &a;
    std::cout << *ptr;
}