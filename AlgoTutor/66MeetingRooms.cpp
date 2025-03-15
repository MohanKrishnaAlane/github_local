#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool CanAttendAll(vector<vector<int>>& intervals)
{
    sort(intervals.begin(),intervals.end());
    for(int i=1;i<intervals.size();i++)
    {
        if(intervals[i-1][1] > intervals[i][0])
            return false;
    }
    return true;
}
int main()
{
    vector<vector<int>> intervals{{1,8},{8,12},{15,20}};
    cout<<CanAttendAll(intervals)<<" all meeting can be attended";
    return 0;
}