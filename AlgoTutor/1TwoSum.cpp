#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    vector<int> nums{1,3,7,2,9};
    int target = 9;
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++)
    {
        auto it = mp.find(target-nums[i]);
        if(it != mp.end())
        {
            cout<<it->second<<" "<<i;
            return 0;
        }
        mp[nums[i]] = i;
    }
    return 0;
}