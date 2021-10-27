#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &nums, int l, int r, int m)
{
    
    vector<int> num1;
    vector<int> num2;
    for(int i=l; i<=m; i++)
    {
        num1.push_back(nums[i]);
    }
    for(int i=m+1; i<=r; i++)
    {
        num2.push_back(nums[i]);
    }
    int k = l;
    int i = 0, j = 0;
    while(i < num1.size() && j<num2.size())
    {
        if(num1[i] <= num2[j])
        {
            nums[k++] = num1[i++];
        }
        else
        {
            nums[k++] = num2[j++];
        }
    }
    while(i<num1.size())
    {
        nums[k++] = num1[i++];
    }
    while(j<num2.size())
    {
        nums[k++] = num2[j++];
    }
}

void mergesort(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return;
    int m = (l + r) / 2;
    mergesort(nums, l, m);
    mergesort(nums, m + 1, r);
    merge(nums, l, r, m);
}

void sortColors(vector<int> &nums)
{
    mergesort(nums, 0, nums.size() - 1);
}

int main()
{
    vector<int> nums{2, 0, 2, 1, 1, 0};
    sortColors(nums);
    for (int i : nums)
    {
        cout << i << " ";
    }
}