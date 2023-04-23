#include <iostream>
using namespace std;
int count_digits(const int &iNumber)
{
    if (iNumber == 0)
        return 0;
    return 1 + count_digits(iNumber / 10);
}
int main()
{
    std::cout << count_digits(1234);
}