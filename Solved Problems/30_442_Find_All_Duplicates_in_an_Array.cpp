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
    return ans;
}

int main()
{
    vector<int> a = {40,30,20,70,80,20,30,10};
    vector<int> res = findDuplicates2(a);
    for (auto i : res)
    {
        cout << i << " ";
    }
}