#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<int> nums{-4,3,-1,-2,4,6};
    int maxproduct = 1;
    int minproduct = 1;
    int ans = INT_MIN;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] < 0)
            swap(maxproduct,minproduct);
        maxproduct = max(maxproduct*nums[i],nums[i]);
        minproduct = min(minproduct*nums[i],nums[i]);
        ans = max(ans,maxproduct);
    }
    cout<<ans<<" is the max subarray product";
}