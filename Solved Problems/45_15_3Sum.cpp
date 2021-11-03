#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{

    vector<vector<int>> res;
    set<vector<int>> triplet;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        int l = i + 1;
        int r = nums.size() - 1;
        while (l < r)
        {

            if (nums[i] + nums[l] + nums[r] == 0)
            {
                triplet.insert({nums[i], nums[l], nums[r]});
                l++;
                r--;
            }
            else if (nums[i] + nums[l] + nums[r] > 0)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    for (auto i = triplet.begin(); i != triplet.end(); i++)
    {
        res.push_back(*i);
    }
    return res;
}
int main()
{
    vector<int> nums{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = threeSum(nums);
    for (auto i : res)
    {
        cout << "{ ";
        for (auto j : i)
            cout << j << " ";
        cout << " }" << endl;
    }
}