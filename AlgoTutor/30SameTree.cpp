#include<iostream>
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
bool IsSame(TreeNode* p, TreeNode* q)
{
    if(!p || !q)
        return p == q;
    return (p->val == q->val && IsSame(p->left, q->left) && IsSame(p->right,q->right));
}
int main()
{
    TreeNode root1(10);
    TreeNode root2(10);
    root1.left = new TreeNode(5);
    root2.left = new TreeNode(5);
    cout<<IsSame(&root1,&root2)<<"that both trees are same";

}