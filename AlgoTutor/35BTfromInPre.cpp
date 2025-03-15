#include<iostream>
#include<vector>
#include<map>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x)
    {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};
map<int,int> mp;
TreeNode* build(vector<int> &preorder, int pstart,int pend, vector<int>& inorder, 
                    int istart,int iend)
    {
        if(pstart > pend || istart > iend)
            return nullptr;
        int rootpos = mp[preorder[pstart]];
        int leftcount = rootpos-istart;
        TreeNode* node = new TreeNode(preorder[pstart]);
        node->left = build(preorder,pstart+1,pstart+leftcount+1,inorder,istart,rootpos-1);
        node->right = build(preorder,pstart+leftcount+1,pend,inorder,rootpos+1,iend);
        return node;
    }


TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
{
    for(int i=0;i<inorder.size();i++)
    {
        mp[inorder[i]] = i;
    }
    return build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
}
int main()
{
    vector<int> preorder{3,9,20,15,7};
    vector<int> inorder{9,3,15,20,7};
    TreeNode* root = buildTree(preorder,inorder);
    return 0;
}