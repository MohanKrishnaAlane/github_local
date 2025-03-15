#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<vector<int>> MergeIntervals(vector<vector<int>>& intervals)
{
    int n = intervals.size();
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> res;
    res.push_back(intervals[0]);
    for(int i=1;i<n;i++)
    {
        if(res.back()[1] >= intervals[i][0])
            res.back()[1] = max(intervals[i][1],res.back()[1]);
        else
            res.push_back(intervals[i]);
    }
    return res;
}
int main()
{
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{9,15}};
    vector<vector<int>> res = MergeIntervals(intervals);
    for(auto v : res)
    {
        for(auto i : v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}