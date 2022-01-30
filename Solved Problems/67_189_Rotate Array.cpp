#include <bits/stdc++.h>

using namespace std;

void rotate(vector<int> &nums, int k)
{

    int n = nums.size();
    k = (k%n);
    cout<<"k "<<k<<endl;
    vector<int> newNums(n,0);
    for (int i = 0; i < n; i++)
    {
        newNums[i] = nums[(n - k) % n];
        k--;
    }
    nums = newNums;
}
int main()
{
    vector<int> nums {1,2,3,4,5,6,7};
    rotate(nums, 3);
    for (int i : nums)
    {
        cout << i << " ";
    }
}