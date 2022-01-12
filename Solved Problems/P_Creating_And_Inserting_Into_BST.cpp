#include<bits/stdc++.h>


using namespace std;

/**
 * Structure for creating a tree
 * 
 */
struct TreeNode {

    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr){}
    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right){}
};

/**
 * Inorder Traversing the Tree
 * 
 * Using it for printing the tree values
 * 
 * Inorder a BST will return a sorted value series
 * 
 * @param root 
 */
void inorderTraverse(TreeNode* root)
{
    if(!root) return;
    inorderTraverse(root->left);
    cout<<root->val<<" ";
    inorderTraverse(root->right);
}

/**
 * Recursive solution to insert into BST
 * 
 * @param root 
 * @param val 
 * @return TreeNode* 
 */
TreeNode *insertIntoBST(TreeNode *root, int val)
{
    if (!root)
    {
        return new TreeNode(val);
    }
    if (val < root->val)
        root->left = insertIntoBST(root->left, val);
    else
        root->right = insertIntoBST(root->right, val);

    return root;
}

/**
 * Initial function to create a BST
 * 
 * @param keys 
 * @return TreeNode* 
 */
TreeNode* constructBst(vector<int>& keys)
{
    TreeNode* root = nullptr;
    for(int key:keys)
    {
        root = insertIntoBST(root, key);
    }
    return root;
}

int main()
{
    vector<int> keys = {15,10,20,8,12,16,25};
    TreeNode* root = constructBst(keys);
    inorderTraverse(root);

}