#include <iostream>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    bool flag = false;
        std::sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                flag = true;
                break;
            }
        }
        return flag;

}

int main()
{
    vector<int> nums = {1, 2, 3, -1, -1};
    cout << containsDuplicate(nums);
}