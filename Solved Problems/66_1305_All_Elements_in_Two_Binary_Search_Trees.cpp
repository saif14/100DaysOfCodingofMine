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


void helper(vector<int> &res, TreeNode *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        // cout<<"r "<<root->val<<endl;
        res.push_back(root->val);
        return;
    }

    helper(res, root->left);

    res.push_back(root->val);
    helper(res, root->right);
}

void merge(vector<int> &nums1, int n1, vector<int> &nums2, int n2)
{
    vector<int> res(n1 + n2);
    int i = 0, j = 0, c = 0;
    while (i < n1 && j < n2)
    {
        if (nums1[i] < nums2[j])
        {
            res[c++] = nums1[i++];
        }
        else
        {
            res[c++] = nums2[j++];
        }
    }
    while (i < n1)
    {
        res[c++] = nums1[i++];
    }
    while (j < n2)
    {
        res[c++] = nums2[j++];
    }

    nums1 = res;
}

vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
{

    vector<int> v1;
    vector<int> v2;
    if (root1)
        helper(v1, root1);
    if (root2)
        helper(v2, root2);
    merge(v1, v1.size(), v2, v2.size());
    return v1;
}

int main()
{
}