#include <bits/stdc++.h>

using namespace std;

int search(vector<int> &nums, int target)
{
    int l = 0;
    int r = nums.size() - 1;
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

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> res;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    for (int i = 0; i < nums1.size(); i++)
    {
        int idx = search(nums2, nums1[i]);
        if(idx !=-1)
        {
            nums2.erase(nums2.begin() + idx);
            res.push_back(nums1[i]);
        }

    }
    return res;
}

//Solution found in internet
//using a hash table

vector<int> intersect2(vector<int>& nums1, vector<int>& nums2) {
    map<int,int> counter{};
    vector<int> res;

    for(auto i:nums1)
    {
        counter[i]++;
    }
    for(auto i:nums2)
    {
        if(counter[i])
        {
            res.push_back(i);
            counter[i]--;
        }
    }

    return res;
}

int main()
{
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};

    vector<int> res = intersect2(nums1, nums2);
    vector<int> ::iterator it;
    for(it = res.begin(); it != res.end(); it++)
    {
        cout<<*it<<" ";
    }
}
