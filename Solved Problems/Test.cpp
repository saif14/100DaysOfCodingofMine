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

TreeNode* dfs(TreeNode* t)
{
    TreeNode* tmp = dfs(t->left);
    t->left = dfs(t->right);
    t->right = tmp;
}

TreeNode *invertTree(TreeNode *root)
{
    dfs(root);
}


int main()
{
}