#include <iostream>
using namespace std;
int fibonacci(int iIndex)
{
    if (iIndex == 0)
        return 0;
    if (iIndex == 1)
        return 1;
    return fibonacci(iIndex - 1) + fibonacci(iIndex - 2);
}
int main()
{
    std::cout << fibonacci(5);
}