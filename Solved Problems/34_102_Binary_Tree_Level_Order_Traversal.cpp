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

vector<vector<int>> levelOrderBottom(TreeNode *root)
{
    vector<vector<int>> res;
    if (!root)
        return res;
    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty())
    {
        int sz = q.size();
        vector<int> nodes(sz);
        for(int i=0; i<sz; i++)
        {
            TreeNode* node = q.front();
            q.pop();
            nodes[i] = node->val;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        res.push_back(nodes);
    }

    return res;
}

int main()
{
}
