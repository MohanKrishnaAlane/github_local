#include<iostream>
#include<vector>
using namespace std;
bool CanJump(vector<int>& nums)
{
    int right = 0;
    for(int i=0;i<nums.size()-1;i++)
    {
        right = max(right,i+nums[i]);
        if(right == i) return false;
    }
    return true;
}
int main()
{
    vector<int> nums { 3,2,1,0,4};
    cout<<CanJump(nums)<<" that can be reached";
}