#include<iostream>
#include<vector>
#include<limits.h>
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
bool util(TreeNode* root, long min, long max)
{
    if(!root)
        return true;
    if(root->val <= min || root->val >= max)
        return false;
    return util(root->left, min, root->val) && util(root->right, root->val, max);
}
bool IsValid(TreeNode* root)
{
    return util(root,LONG_MIN,LONG_MAX);
}
int main()
{
    TreeNode root(5);
    root.left = new TreeNode(1);
    root.right = new TreeNode(4);
    root.right->left = new TreeNode(3);
    root.right->right = new TreeNode(6);
    cout<<IsValid(&root)<<" the tree is BST";
}