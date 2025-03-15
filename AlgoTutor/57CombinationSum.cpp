#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void dfs(vector<int>& nums,int i, int target,vector<int>&& path, vector<vector<int>>& ans)
{
    if(target < 0)
        return;
    if(target == 0)
    {
        ans.push_back(path);
        return;
    }
    for(int j = i;j<nums.size();j++)
    {
        path.push_back(nums[j]);
        dfs(nums,j,target - nums[j], std::move(path), ans);
        path.pop_back();
    }
    return;
}
vector<vector<int>> TargetSum(vector<int>& nums,int target)
{
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    dfs(nums,0,target,{},ans);
    return ans;
}
int main()
{
    vector<int> nums{3,6,4,9,10};
    int target = 10;
    vector<vector<int>> ans = TargetSum(nums,target);
    for(auto v : ans)
    {
        for(auto i : v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}