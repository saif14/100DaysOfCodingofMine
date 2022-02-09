#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> &nums, int l, int r, int target)
{
    int m;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (nums[m] == target)
        {
            return m;
        }
        else if (target < nums[m])
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return -1;
}

int findPairs(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    set<int> unique;

    for (int i = 0; i < nums.size(); i++)
    {
        if(binarySearch(nums, i+1, nums.size()-1, nums[i]+k) > 0)
        {
            unique.insert(nums[i]);
        }
    }

    return unique.size();
}

int main()
{
    vector<int> nums{1};
    cout << findPairs(nums, 0);

    
}