#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int CountRooms(vector<vector<int>>& intervals)
{
    sort(intervals.begin(),intervals.end());
    int n = intervals.size();
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(intervals[0][1]);
    int i = 1;
    while(i < n)
    {
        int t = pq.top();
        if(t <= intervals[i][0])
            pq.pop();
        pq.push(intervals[i][1]);
        i++;
    }
    return pq.size();
}
int main()
{
    vector<vector<int>> intervals{{1,3},{2,10},{5,8}};
    cout<<CountRooms(intervals)<<" rooms are required";
}