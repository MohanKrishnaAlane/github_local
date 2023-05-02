#include <iostream>
using namespace std;
int factoriral(int iValue)
{
    if (iValue < 0)
        return -1;
    if (iValue == 1 || iValue == 0)
        return 1;
    int aCounter = 1;
    int aResult = 1;
    for (; aCounter <= iValue; aCounter++)
    {
        aResult *= aCounter;
    }
    return aResult;
}
int main()
{
    cout << factoriral(5);
}