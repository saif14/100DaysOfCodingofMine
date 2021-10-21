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
    vector<vector<int>> result;
    if(!root) return result;
    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty())
    {
        int n = q.size();
        vector<int> nodes(n);
        for(int i=0; i<n; i++)
        {
            TreeNode *node = q.front();
            q.pop();
            nodes[i] = node->val;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);

        }
        result.push_back(nodes);
    }

    reverse(result.begin(), result.end());
    return result;
    
}

int main()
{
}
