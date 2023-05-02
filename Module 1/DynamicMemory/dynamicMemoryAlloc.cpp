#include <iostream>
int main()
{
    int *ptr1 = nullptr;
    ptr1 = new int;
    *ptr1 = 100;
    std::cout << *ptr1 << std::endl;
    int *ptr2 = nullptr;
    ptr2 = new int;
    *ptr2 = 200;
    ptr1 = ptr2;
    std::cout << *ptr1;
}