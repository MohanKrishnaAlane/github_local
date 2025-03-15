#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums{1,8,6,2,5,4,8,3,7};
    int left = 0;
    int right = nums.size()-1;
    int curArea = 0;
    int maxArea = 0;
    while(left < right)
    {
        curArea = min(nums[left],nums[right]) * (right-left);
        maxArea = max(curArea,maxArea);
        if(nums[left] < nums[right])
            left++;
        else   
            right--;
    }
            
    cout<<maxArea<<" is the max area";
    return 0;
}