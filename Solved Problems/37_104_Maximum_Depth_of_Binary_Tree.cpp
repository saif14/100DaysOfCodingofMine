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

int cc = 1000000;
void dfs(TreeNode *root, int c)
{

    if (root != NULL)
    {
        if (!root->left && !root->right)
        {
            if (c >= cc)
                cc = c;
        }

        dfs(root->left, c + 1);
        dfs(root->right, c + 1);
    }
}


int maxDepth(TreeNode *root)
{
    if (!root)
        return 0;
    dfs(root, 1);

    return cc;
}

int main()
{
}