#include <iostream>
using namespace std;
int Power(const int &iBase, const int &iExponent)
{
    if (iExponent == 0)
        return 1;
    return iBase * Power(iBase, iExponent - 1);
}
int main()
{
    cout << Power(2, 4);
    return 0;
}