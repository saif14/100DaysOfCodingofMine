#include <bits/stdc++.h>

using namespace std;

int findMaxLength(vector<int> &nums)
{
    map<int, int> m;
    int res = 0;
    int sum = 0;
    for(int i=0; i<nums.size(); i++)
    {
        sum += (nums[i]==0?-1:1);

        if(sum == 0)
        {
            res = max(res,i-0+1);
        }
        else if(m.find(sum) != m.end())
        {
            res = max(res, i-m[sum]);
        }
        else
        {
            m[sum] = i;
        }

    }

    return res;
}

int main()
{
}