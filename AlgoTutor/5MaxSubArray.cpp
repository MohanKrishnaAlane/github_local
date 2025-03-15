#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums{-1,3,2,-4,5,1,3,-2};
    int globalsum = nums[0];
    int currsum = nums[0];
    for(int i=1;i<nums.size();i++)
    {
        currsum = max(nums[i],currsum + nums[i]);
        globalsum = max(globalsum,currsum);
    }
    cout<<globalsum<<" is the max sum subarray";
    return 0;
}