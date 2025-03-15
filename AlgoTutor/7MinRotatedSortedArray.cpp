#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums{3,4,5,1,2};
    int left = 0;
    int right = nums.size()-1;
    while(left <= right)
    {
        if(nums[left] <= nums[right]) 
            {
                cout<<nums[left]<<" is the min";
                return 0;
            }
        int mid = (left + (right-left))/2;
        if(nums[left] < nums[mid])
            left = mid+1;
        else if(nums[mid] < nums[right])
            right = mid - 1;
    }
    return 0;
}