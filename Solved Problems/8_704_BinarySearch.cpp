#include<iostream>
#include<vector>

using namespace std;

int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        int m ;
        while(l<=r)
        {
            m = (l+r)/2;
            if(nums[m] == target)
            {
                return m;
            }
            else if(target < nums[m])
            {
                r = m-1;
            }
            else
            {
                l = m+1;
            }

        }
        return -1;
    }

int main()
{
    vector<int> nums = {5};
    cout<<search(nums, 5);
}
