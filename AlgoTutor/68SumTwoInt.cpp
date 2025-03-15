#include<iostream>
using namespace std;
int main()
{
    int a = 14, b = 7;
    int sum = a;
    while(b != 0)
    {
        sum = a ^ b;
        b = (a&b) << 1;
        a = sum;
    }
    cout<<a<<" is the sum";
    return 0;
}