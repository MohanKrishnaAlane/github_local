/*
#include<iostream>
#include<algorithm>
#include<vector>
#include<limits.h>
using namespace std;
int MinCoins(vector<int>& coins, int n)
{
    int dp[++n];
    dp[0] = 0;
    sort(begin(coins),end(coins));
    for(int i=1;i<n;i++)
    {
        dp[i] = INT_MAX;
        for(auto c : coins)
        {
            if(i-c < 0)
                break;
            if(dp[i-c] != INT_MAX) 
                dp[i] =  min(dp[i],1+dp[i-c]);
        }
    }
    return dp[--n] == INT_MAX ? -1 : dp[n];
}
int main()
{
    vector<int> coins{1,2,5};
    cout<<MinCoins(coins,11)<<" coins are needed";
}

*/