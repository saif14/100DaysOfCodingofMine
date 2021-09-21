#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> res(m + n);
    int i = 0, j = 0, c = 0;
    while(i <m && j <n)
    {
        if(nums1[i] < nums2[j])
        {
            res[c++] = nums1[i++]; 
        }
        else
        {
            res[c++] = nums2[j++];
        }
    }
     while(i<m)
    {
        res[c++] = nums1[i++];
    }
    while(j<n)
    {
        res[c++] = nums2[j++];
    }
    nums1 = res;
}

int main()
{
    vector<int> nums1 = {4,5,6,8};
    vector<int> nums2 = {};
    int m = 4;
    int n = 0;
    merge(nums1, m, nums2, n);
    for (int i = 0; i < nums1.size(); i++)
    {
        cout <<"print: "<<i<<" " <<nums1[i] << endl;
    }
}
