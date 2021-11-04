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

int sum = 0;
int sumOfLeftLeaves(TreeNode *root)
{
    if (!root)
        return 0;
    if (root->left)
        sumOfLeftLeaves(root->left);
    if (root->right)
        sumOfLeftLeaves(root->right);
    if (root->left && (!root->left->left && !root->left->right))
        sum += root->left->val;
    return sum;
}

int main()
{
    
}