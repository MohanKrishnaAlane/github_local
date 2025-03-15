#include<iostream>
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
int max_sum = INT_MIN;
int max_gain(TreeNode* root)
{
    if(!root)
        return 0;
    int l = max(max_gain(root->left),0);
    int r = max(max_gain(root->right),0);
    int new_price = root->val + l + r;
    max_sum = max(max_sum,new_price); 
    return root->val + max(l,r);
}
int maxPathSum(TreeNode* root)
{
    max_gain(root);
    return max_sum;
}
int main()
{
    TreeNode root(-10);
    root.left = new TreeNode(9);
    root.right = new TreeNode(20);
    root.right->left = new TreeNode(15);
    root.right->right = new TreeNode(7);
    cout<<maxPathSum(&root)<<" is the maxsum";
    return 0;
}