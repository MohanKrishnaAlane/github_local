#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Node
{
public:
    int val;
    vector<Node*> neighbors;
    Node(int val)
    {
        this->val = val;
        neighbors = vector<Node*>();
    }
};
Node* dfs(Node* curr, unordered_map<Node*,Node*>& mp)
{
    Node* clone = new Node(curr->val);
    mp[curr] = clone;
    vector<Node*> neighbors;
    for(auto it : curr->neighbors)
    {
        if(mp.find(it) != mp.end())
        {
            neighbors.push_back(mp[it]);
        }
        else{
            neighbors.push_back(dfs(it,mp));
        }
    }
    clone->neighbors = neighbors;
    return clone;
}

Node* CloneGraph(Node* curr)
{
    unordered_map<Node*,Node*> mp;
    return dfs(curr,mp);
}
int main()
{
    Node n1(1),n2(2),n3(3),n4(4);
    n1.neighbors.push_back(&n2);
    n1.neighbors.push_back(&n4);
    n2.neighbors.push_back(&n1);
    n2.neighbors.push_back(&n3);
    n3.neighbors.push_back(&n2);
    n3.neighbors.push_back(&n4);
    n4.neighbors.push_back(&n1);
    n4.neighbors.push_back(&n3);
    Node* clone = CloneGraph(&n1);
    return 0;
}