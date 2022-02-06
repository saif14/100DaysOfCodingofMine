#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int k = 0;
    int curr_num = nums[0];
    int curr_count = 0;
    int idx_to_put = 0;
    vector<int> res;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == curr_num && curr_count < 2)
        {
            nums[idx_to_put] = nums[i];
            // cout << "nums[" << idx_to_put << "] " << nums[idx_to_put] << endl;
            res.push_back(nums[idx_to_put]);
            k++;
            curr_count++;
            idx_to_put++;
        }
        else if (nums[i] != curr_num)
        {
            curr_num = nums[i];
            nums[idx_to_put] = curr_num;
            res.push_back(nums[idx_to_put]);
            // cout << "nums[" << idx_to_put << "] " << nums[idx_to_put] << endl;
            k++;
            curr_count = 1;
            idx_to_put++;
        }
    }

    for(auto i: res)
    {
        cout<<i<<" ";
    }
    return k;
}

int main()
{
    vector<int> nums{1, 1, 1, 2, 2, 3};

    cout << removeDuplicates(nums) << endl;

}