#include <bits/stdc++.h>

using namespace std;
bool search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        int m ;
        while(l<=r)
        {
            m = (l+r)/2;
            if(nums[m] == target)
            {
                return true;
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
        return false;
    }
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    for(auto i: matrix)
    {
        if(search(i, target) == true)
        {
            return true;
        }
    }
    return false;

}

int main()
{
}