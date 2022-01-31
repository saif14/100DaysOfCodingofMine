#include <bits/stdc++.h>

using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{
    int maxSum = 0;
    for (auto p : accounts)
    {
        int sum = 0;
        for (auto i : p)
        {
            sum += i;
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main()
{
}