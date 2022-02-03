#include <bits/stdc++.h>

using namespace std;

int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
{
    map<int, int> m;
    int count = 0;
    for(auto i: nums1)
    {
        for(auto j: nums2)
        {
            m[i+j]++;
        }
    }

    for(auto i: nums3)
    {
        for(auto j: nums4)
        {
            count += m[-(i+j)];
        }
    }

    return count;
}

int main()
{
}