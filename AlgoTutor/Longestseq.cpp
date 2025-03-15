#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int longestSeq(vector<int>& nums)
{
    sort(nums.begin(),nums.end());
    auto last = std::unique(nums.begin(),nums.end());
    nums.erase(last,nums.end());
    vector<int> res;
    int d = 1;
    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i] == nums[i+1]-1)
        {
            d++;
        }
        else{
            if(d > 1)
            {
                res.push_back(d);
            }
            d = 1;
        }
    }
    return *max_element(res.begin(),res.end());
}
int main()
{
    vector<int> nums{2,4,1,100,3,200};
    cout<<longestSeq(nums)<<" is the longest seq count";
}
