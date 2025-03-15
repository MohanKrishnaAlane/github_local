#include<iostream>
#include<vector>
using namespace std;
int LongestIncSeq(vector<int>& nums)
{
    vector<int> res;
    for(int i=0;i<nums.size();i++){
        auto it = std::lower_bound(res.begin(),res.end(),nums[i]);
        if(it == res.end())
            res.push_back(nums[i]);
        else
            *it = nums[i];
    }
    return res.size();
}
int main()
{
    vector<int> nums { 100,2,9,8,3,6,5,7,15};
    cout<<LongestIncSeq(nums)<<" is the size of LIS";
    return 0;
}