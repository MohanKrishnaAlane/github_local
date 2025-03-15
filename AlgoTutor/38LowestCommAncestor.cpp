#include<iostream>
#include<vector>
#include<algorithm>
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
bool LCA(TreeNode* root, TreeNode* p, vector<TreeNode*>& vp)
{
    if(!root)
        return false;
    vp.push_back(root);
    if(root == p)
        return true;
    if(LCA(root->left, p,vp) || LCA(root->right,p,vp))
        return true;
    vp.pop_back();
    return false;
}
TreeNode* LCA2(TreeNode* root, TreeNode* p, TreeNode* q)
{
    if(!root || root == p || root == q)
        return root;
    TreeNode* left = LCA2(root->left,p,q);
    TreeNode* right = LCA2(root->right,p,q);
    return !left ? right : !right ? left : root; 
}
int main()
{
    TreeNode root(3);
    root.left = new TreeNode(5);
    root.right = new TreeNode(1);
    root.left->left = new TreeNode(6);
    root.left->right = new TreeNode(2);
    root.left->right->left = new TreeNode(7);
    root.left->right->right = new TreeNode(4);
    root.right->left = new TreeNode(0);
    root.right->right = new TreeNode(8);
    TreeNode* p =root.left->left;
    TreeNode* q = root.left->right->right;
    vector<TreeNode*> vp;
    vector<TreeNode*> vq;
    //LCA(&root,p,vp);
    //LCA(&root,q,vq);
    TreeNode* lca = LCA2(&root,p,q);
    cout<<lca->val<<" is the LCA";

    for(int i=vq.size()-1;i>=0;i--)
    {
        if(std::find(vp.begin(),vp.end(),vq[i]) != vp.end())
        {
            cout<<vq[i]->val<<" is the LCA";
            return 0;
        }
    }
    return 0;
}