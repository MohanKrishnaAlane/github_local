#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums{1};
    int res = nums.size();
    for(int i=0;i<nums.size();i++)
    {
        res ^= i;
        res ^= nums[i];
    }
    cout<<res<<" is the missing number";
}