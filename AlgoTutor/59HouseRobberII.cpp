#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int RobRange(vector<int>& nums,int s,int n)
{
    vector<int> dp(n,0);
    dp[s] = nums[s];
    dp[s+1] = nums[s+1];
    for(int i=s+2;i<n;i++)
    {
        dp[i] = max(dp[i-1],nums[i]+dp[i-2]);
    }
    return dp[n-1];
}
int CircularHouse(vector<int>& nums)
{
    if(nums.empty()) return 0;
    if(nums.size() == 1) return 1;
    if(nums.size() == 2) return max(nums[0],nums[1]);
    return max(RobRange(nums,0,nums.size()-1), RobRange(nums,1,nums.size()));
}
int main()
{
    vector<int> nums{3,2,4,5};
    cout<<CircularHouse(nums);
}