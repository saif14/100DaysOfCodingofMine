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

void inorder(TreeNode *r)
{
    if (!r)
        return;

    inorder(r->left);
    cout << r->val << " ";
    inorder(r->right);
}

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

void deleteNode(TreeNode *r, int val)
{
    if (!r)
        return;
    if (!r->left && !r->right)
    {
        if (r->val == val)
        {
            delete root;
            root = nullptr;
        }

        return;
    }

    TreeNode *keyNode = nullptr;
    TreeNode *currNode = nullptr;
    TreeNode *prevNode = r;

    queue<TreeNode *> q;

    if (r->val == val)
    {
        keyNode = r;
        q.push(r->left);
        q.push(r->right);
        while (!q.empty())
        {
            currNode = q.front();
            q.pop();
            if (currNode->left)
                q.push(currNode->left);
            if (currNode->right)
                q.push(currNode->right);
        }
        
    }
    else
    {
        q.push(r->left);
        q.push(r->right);
        while (!q.empty())
        {
            currNode = q.front();
            q.pop();
            
            if (currNode->val == val)
            {
                keyNode = currNode;
            }
            if(!currNode->left->left && !currNode->left->right)
            {
                prevNode = currNode;
            } 
            if (currNode->left)
                q.push(currNode->left);
            if (currNode->right)
                q.push(currNode->right);
        }
    }
    if (keyNode)
    {
        keyNode->val = currNode->val;
        if(prevNode->left == currNode)
        prevNode->left = nullptr;
        else
        {
            prevNode->right = nullptr;
        }
        currNode = nullptr;
       
    }
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
    deleteNode(root, 30);
    cout<<endl;
    inorder(root);
}