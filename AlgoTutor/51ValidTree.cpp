#include<iostream>
#include<vector>
using namespace std;
bool validTree(int n,vector<vector<int>> &edges)
{
    vector<int> nodes(n,0);
    for(int i=0;i<n;i++)
        nodes[i] = i;
    for(auto edge : edges)
    {
        int f = edge[0];
        int s = edge[1];
        while(nodes[f] != f)
            f = nodes[f];
        while(nodes[s] != s)
            s = nodes[s];
        if(nodes[f] == nodes[s])
            return false;
        nodes[s] = f;
    }
    return edges.size() == n-1;
}
int main()
{
    vector<vector<int>> edges{{0,1},{1,2},{1,3}};
    cout<<validTree(4, edges)<<" it is valid tree";
    return 0;
}