#include<iostream>
#include<vector>
#include<queue>
#include<sstream>
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
bool isSame(TreeNode* p, TreeNode* q)
{
    if(!p && !q)
        return true;
    if(!p || !q)
        return false;
    if(p->val != q->val)
        return false;
    return isSame(p->left,q->left) && isSame(p->right,q->right);
}
bool isSameSubTree(TreeNode* p, TreeNode* q)
{
    if(!p || !q)
        return false;
    if(isSame(p,q))
        return true;
    return isSameSubTree(p->left,q) || isSameSubTree(p->right,q);
}
int main()
{
    TreeNode root(3);
    root.left = new TreeNode(9);
    root.right = new TreeNode(20);
    root.right->left = new TreeNode(15);
    root.right->left->left = new TreeNode(5);
    root.right->left->right = new TreeNode(6);
    root.right->right = new TreeNode(7);
    TreeNode subTree(15);
    subTree.left = new TreeNode(5);
    subTree.right = new TreeNode(6);
    cout<<isSameSubTree(&root, &subTree)<<" subtree is present";
}