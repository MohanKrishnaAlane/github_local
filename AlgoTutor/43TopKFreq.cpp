/*
#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
int main()
{
    vector<int> arr = {1,3,2,1,2,4,5};
    int k = 2;
    unordered_map<int,int> mp;
    for(auto i:arr) mp[i]++;
    priority_queue<pair<int,int>> pq;
    for(auto& [a,b] : mp) pq.push({b,a});
    vector<int> res;
    while(!pq.empty() && k--)
    {
        res.push_back(pq.top().second);
        pq.pop();   
    }
    for(auto i : res) cout<<i<<" ";
    return 0;
}
*/