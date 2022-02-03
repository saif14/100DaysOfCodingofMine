#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**
 * O(nlogn) Complexity and O(n) -->space complexity
 */

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
        v.push_back({nums[i], i});
    sort(begin(v), end(v));
    int left = 0, right = n - 1;
    while (left < right)
    {
        int sum = v[left].first + v[right].first;
        if (sum == target)
            return {v[left].second, v[right].second};
        else if (sum > target)
            right--;
        else
            left++;
    }
}

/**
 * O(n) complexity
 * */
vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int key = target - nums[i];
        if (mp.find(key) != mp.end())
            return {mp[key], i};
        mp[nums[i]] = i;
    }
    return {};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    vector<int> res = twoSum(nums, 9);
    cout << "[" << res[0] << "," << res[1] << "]" << endl;
}
