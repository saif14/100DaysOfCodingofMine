#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};
TreeNode *root = nullptr;

void insert_level_order(int val, TreeNode *r)
{
    if (!r)
    {
        r = new TreeNode(val);
        root = r;
        return;
    }
    TreeNode *new_node = new TreeNode(val);
    queue<TreeNode *> q;
    q.push(r);

    while (!q.empty())
    {
        TreeNode *n = q.front();
        q.pop();
        if (!n->left)
        {
            n->left = new_node;
            return;
        }
        else if (!n->right)
        {
            n->right = new_node;
            return;
        }
        else
        {
            q.push(n->left);
            q.push(n->right);
        }
    }
}

void inorder(TreeNode *r)
{
    if (!r)
        return;
    
    
    inorder(r->left);
    cout << r->val << " ";
    inorder(r->right);
}
int main()
{
    insert_level_order(10, root);
    insert_level_order(20, root);
    insert_level_order(30, root);
    insert_level_order(40, root);
    insert_level_order(50, root);
    insert_level_order(70, root);
    insert_level_order(60, root);

    inorder(root);
}