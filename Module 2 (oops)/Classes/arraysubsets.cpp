#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subsetsum(int index,vector<int> nums, int target, vector<vector<int>>& res, vector<int>& curr)
{
    if(target == 0)
    {
        res.push_back(curr);
        return;
    }
    if(target < 0 || index >= nums.size())
    {
        return;
    }
    for(int i = index;i < nums.size();i++)
    {
        curr.push_back(nums[i]);
        subsetsum(i+1,nums,target - nums[i],res,curr);
        curr.pop_back();
    }

}
std::vector<std::vector<int>> findAllSubsetSum(vector<int> nums,int target)
{
    std::vector<std::vector<int>> result;
    std::vector<int> current;
    subsetsum(0,nums,target,result,current);
    return result;
}
int main()
{
    std::vector<int> arr = {1,2,3,4,5,6};
    auto pr = std::minmax_element(arr.begin(),arr.end());
    cout<<*(pr.first) <<" "<<*(pr.second);
    /*std::vector<vector<int>> subsets = findAllSubsetSum(arr,10);
    for(auto i : subsets)
    {
        for(auto j : i)
        {
            cout<<j <<" ";
        }
        cout<<endl;
    }*/
}