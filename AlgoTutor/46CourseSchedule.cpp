/*#include<iostream>
#include<vector>
#include<queue>
using namespace std;
bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    vector<int> adj[numCourses];
    vector<int> indegree(numCourses,0);
    for(auto x : prerequisites)
    {
        adj[x[0]].push_back(x[1]);
        indegree.push_back(x[1]++);
    }
    queue<int> q;
    for(int i=0;i<numCourses;i++)
    {
        if(indegree[i] == 0)
            q.push(i);
    }
    vector<int> ans;
    while(!q.empty())
    {
        int t = q.front();
        ans.push_back(t);
        q.pop();
        for(auto i : adj[t])
        {
            indegree[i]--;
            if(indegree[i] == 0)
                q.push(i);
        }
    }
    return ans.size() == numCourses;
}
int main()
{
    vector<vector<int>> prereq{{1,0},{2,0}};
    cout<<canFinish(3,prereq)<<"course can be finished";
    return 0;
}
*/