#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums{2,1,3,1,4,6};
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i] == nums[i+1])
            cout<<"Found duplicate";
            return 0;
    }
    cout<<"no duplicates";
    return 0;
}