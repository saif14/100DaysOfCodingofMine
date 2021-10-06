#include <bits/stdc++.h>

using namespace std;

//This is my solution
vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> res;
    map<int, int> count;
    for (auto i : nums)
    {
        count[i]++;
        if (count[i] > 1)
        {
            res.push_back(i);
        }
    }
    return res;
}

//This is a solution done by others
//Space and time both complexities are very low here
//might use for hash table usage example.
vector<int> findDuplicates2(vector<int> &nums)
{

    vector<int> ans;

    for (auto num : nums)
    {
        if (nums[abs(num) - 1] < 0)
        { // seen before
            ans.push_back(abs(num));
        }
        nums[abs(num) - 1] *= -1;
    }
    //         for (auto num : nums)
    //             nums[abs(num) - 1] *= -1;

    //         for (auto num : nums)
    //             if (nums[abs(num) - 1] > 0) {
    //                 ans.push_back(abs(num));
    //                 nums[abs(num) - 1] *= -1;
    //             }

    return ans;

    //         vector<int> ret;

    //         int i = 0, N = nums.size();

    //         for (int i = 0; i < nums.size();++i) {
    //             while (nums[nums[i]-1] != nums[i]) {
    //                 swap(nums[nums[i]-1], nums[i]);
    //             }
    //         }
    //         for (int i = 0; i < nums.size();++i) {
    //             if (nums[i] != i + 1 && nums[nums[i] - 1] == nums[i])
    //                 ret.push_back(nums[i]);
    //         }
    //         return ret;
}

int main()
{
    vector<int> a = {1};
    vector<int> res = findDuplicates(a);
    for (auto i : res)
    {
        cout << i << " ";
    }
}