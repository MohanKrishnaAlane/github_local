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
void ToString(TreeNode* root, ostringstream& temp)
{
    if(!root)
    {
        temp<<"N ";
        return;
    }
    temp<<root->val<<" ";
    ToString(root->left,temp);
    ToString(root->right,temp);
    return;
}
TreeNode* ToStructure(istringstream& temp)
{
    string value;
    temp>>value;
    if(value == "N")
    {
        return nullptr;
    }
    TreeNode* root = new TreeNode(stoi(value));
    root->left = ToStructure(temp);
    root->right = ToStructure(temp);
    return root;

}
string serialise(TreeNode* root)
{
    ostringstream temp;
    ToString(root,temp);
    return temp.str();
}
TreeNode* deserialise(string str)
{
    istringstream temp(str);
    return ToStructure(temp);
}
int main()
{
    TreeNode root(3);
    root.left = new TreeNode(9);
    root.right = new TreeNode(20);
    root.right->left = new TreeNode(15);
    root.right->right = new TreeNode(7);
    string str = serialise(&root);
    TreeNode* temp = deserialise(str);
    return 0;
}