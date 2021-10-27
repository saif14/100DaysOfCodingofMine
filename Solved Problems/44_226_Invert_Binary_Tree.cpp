#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *invertTree(TreeNode *root)
{

    if(!root) return root;
    if(!root->left && !root->right) return root;
    
        TreeNode* t1 = invertTree(root->left);;
        TreeNode* t2 = invertTree(root->right);
        root->left = t2;
        root->right = t1;
        return root;  
}

int main()
{
}