#include <bits/stdc++.h>

using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    map<int, int> sumIdx;
    int res = 0;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum == k)
            res++;
        if(sumIdx.find(sum-k)!=sumIdx.end())
        {
            res+= sumIdx[sum-k];
        }
        sumIdx[sum]++;
    }
    return res;
}

int main()
{
    vector<int> nums{1, 2, 3, 4, 5};
    cout << subarraySum(nums, 9);
}