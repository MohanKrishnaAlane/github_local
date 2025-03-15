#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int MaxAmount(vector<int>& nums)
{
    int rob = 0;
    int norob = 0;
    for(auto i : nums)
    {
        int newRob = norob + i;
        norob = max(rob,norob);
        rob = newRob;
    }
    return max(rob,norob);
}
int dpMaxAmount(vector<int>& nums)
{
    if(nums.empty()) return 0;
    if(nums.size() == 1) return 1;
    if(nums.size() == 2) return max(nums[0],nums[1]);
    vector<int> dp(nums.size(),0);
    for(int i=2;i<nums.size();i++)
    {
        dp[i] = max(dp[i-1],nums[i] + dp[i-2]);
    }
    return dp.back();
}
int main()
{
    vector<int> nums {1,2,3,1};
    cout<<dpMaxAmount(nums)<<" is the max";
}