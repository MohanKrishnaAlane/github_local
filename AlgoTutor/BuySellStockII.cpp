#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices, int K, int N)
{
    if(!N)
        return 0;
    vector<vector<int>> dp{K+1,vector<int>{N,0}};
    
    for(int i=1;i<=K;i++)
    {
        int maxdiff = -prices[0];
        for(int j=1;j<N;j++)
        {
            dp[i][j] = std::max(dp[i-1][j], prices[j] + maxdiff);
            maxdiff = std::max(maxdiff, dp[i-1][j] - prices[j]);
        }
    }
}
int main()
{
    vector<int> v{10,22,5,23,65,80};
    cout<<maxProfit<<(v,2,6);
}