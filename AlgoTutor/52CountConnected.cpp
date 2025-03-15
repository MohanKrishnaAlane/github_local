#include<iostream>
#include<functional>
#include<vector>
#include<numeric>
using namespace std;
int countConnected(int n,vector<vector<int>>& edges)
{
    vector<int> p(n);
    iota(begin(p),end(p),0);
    std::function<int (int)> find = [&](int v)
    {
        return p[v] == v ? v : p[v] = find(p[v]);
    };
    for(auto edge : edges)
    {
        int v = find(edge[0]);
        int w = find(edge[1]);
        p[w] = v; 
        n -= v != w;
    }
    return n;
}
int main(){
    vector<vector<int>> edges{{0,1},{1,2},{0,2}};
    cout<<countConnected(3,edges)<<"connected components";
}