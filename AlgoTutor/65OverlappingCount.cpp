#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int CountOverlapping(vector<vector<int>>& intervals)
{
    sort(intervals.begin(),intervals.end(),[](vector<int>& a, vector<int>& b){
        return a[1] < b[1];
    });
    int n = intervals.size();
    int res = -1;
    vector<int> pre = intervals[0];
    for(auto i : intervals)
    {
        if(pre[1] > i[0])
            res++;
        else
            pre = i;
    }
    return res;
}
int main()
{
    vector<vector<int>> intervals{{1,2},{2,3},{3,4},{1,3}};
    cout<<CountOverlapping(intervals)<<" overlapping intervals";
}