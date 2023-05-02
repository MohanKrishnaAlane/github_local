#include<iostream>
using namespace std;

int factorial(int iValue)
{
    if(iValue < 0)
    {
        return -1;
    }
    if(iValue == 1 || iValue == 0)
    {
        return 1;
    }
    return iValue * factorial(iValue-1);
}
int main()
{
    cout<<factorial(5);
    return 0;
}