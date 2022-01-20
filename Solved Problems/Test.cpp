#include <bits/stdc++.h>

using namespace std;

int minEatingSpeed(vector<int> &piles, int h)
{
    int low = 1, high = 1000000000, k = 0;
    while (low <= high)
    {
        k = (low + high) / 2;
        int hourCount = 0;
        for (int i = 0; i < piles.size(); i++)
        {
            hourCount += ceil(1.0 * piles[i] / k);
        }
        if (hourCount > h)
        {
            low = k+ 1;
        }
        else 
        {
            high = k-1;
        }
    }
    return low;
}

int main()
{
}