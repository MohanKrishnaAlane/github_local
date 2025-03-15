#include<iostream>
#include<vector>
#include<stack>
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
int KthSmallest(TreeNode* root,int k)
{
    if(!root)
        return 0;
    TreeNode* temp = root;
    stack<TreeNode*> st;
    int n=0;
    while(temp || !st.empty())
    {
        while(temp)
        {
            st.push(temp);
            temp = temp->left;
        }
        temp = st.top();
        st.pop();
        n+=1;
        if(n == k)
            return temp->val;
        temp = temp->right;
    }
    return 0;
}
int main()
{
    TreeNode root(4);
    root.left = new TreeNode(1);
    root.right = new TreeNode(7);
    root.right->left = new TreeNode(5);
    root.right->right = new TreeNode(8);
    cout<<KthSmallest(&root,3)<<"is the Kth smallest";
}