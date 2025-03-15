#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> prices { 3,1,5,7,8};
    int profit = 0;
    int buy = prices[0];
    for(int i=1;i<prices.size();i++)
    {
        profit = max(profit,prices[i] - buy);
        buy = min(prices[i],buy);
    }
    cout<<profit<<" max profit gain";
    return 0;
}