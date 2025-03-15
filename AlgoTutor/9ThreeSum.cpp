#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    vector<int> nums{-1,0,1,2,-1,-4};
    sort(nums.begin(),nums.end());
    set<vector<int>> unique_set;
    int n = nums.size();
    for(int i=0;i<n-2;i++)
    {
        int j = i+1;
        int k = n-1;
        while(j < k)
        {
            if(nums[i] + nums[j] + nums[k] == 0)
                unique_set.insert({nums[i],nums[j++],nums[k--]});
            else if(nums[i] + nums[j] + nums[k] > 0)
                k--;
            else
                j++;
        }
    }
    for(auto v : unique_set)
    {
        for(auto i : v)
        {
            cout<<i<<" ";
        }
        cout<<"above is the result";
    }
    return 0;
}