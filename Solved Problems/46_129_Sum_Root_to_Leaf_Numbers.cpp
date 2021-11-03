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

int sumVal(TreeNode *root, int sum)
{
    return !root->left && !root->right ? sum * 10 + root->val : (root->left ? sumVal(root->left, sum * 10 + root->val) : 0) + (root->right ? sumVal(root->right, sum * 10 + root->val) : 0);
}
int sumNumbers(TreeNode *root)
{
    return sumVal(root, 0);
}

int main()
{
}
