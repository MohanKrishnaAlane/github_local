#include<iostream>
using namespace std;
int main()
{
    int n = 13;
    int count = 0;
    /*
    while(n)
    {
        if(n&1 == 1)
            count++;
        n >>= 1;
    }*/
    while(n)
    {
        n &= n-1;
        count++;
    }
    cout<<count<<" bits are set";
}