#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n = 15;
    vector<int> dp(n+1,0);
    int offset = 1;
    for(int i=1;i<=n;i++)
    {
        if(2 * offset == i)
            offset = i;
        dp[i] = 1 + dp[i - offset];
    }
    cout<<dp[n]<<" is the number of bits set for "<<n;
    return 0;
}