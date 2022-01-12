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


/**
 * @brief Better Solution Found on Discussion 
 * 
 */

int sumBetter(TreeNode* root, int sum)
{
    if(!root) return 0;
    sum = (2*sum) + root->val;
    if(!root->left && !root->right) return sum;
    return sumBetter(root->left, sum) + sumBetter(root->right, sum);
}


/**
 * @brief My Solution
 * Not a very good recursive solution
 */
int s = 0;
void sum(TreeNode *root, int c)
{
    if (root != NULL)
    {
        c = c ^ (root->val);
        if (!root->left && !root->right)
        {
            s += c;
            cout << "s " << s << endl;
            c /= 2;
        }
        else
        {
            c = c * 2;
        }
        sum(root->left, c);
        sum(root->right, c);
    }

    // return s;
}
int sumRootToLeaf(TreeNode *root)
{
    sum(root, 0);
    // cout<<"s "<<s;
    return s;
}




int main()
{

}