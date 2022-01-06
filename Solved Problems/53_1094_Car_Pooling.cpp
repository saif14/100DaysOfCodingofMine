#include <bits/stdc++.h>

using namespace std;

bool carPooling(vector<vector<int>> &trips, int capacity)
{

    vector<int> passengerCount(1001, 0);
    for (auto trip : trips)
    {
        // cout<<"t "<<trip[1]<<" "<<trip[2]<<endl;
        passengerCount[trip[1]] += trip[0];
        passengerCount[trip[2]] -= trip[0];
        // cout<<"p "<<passengerCount[trip[1]]<<" "<<passengerCount[trip[2]]<<endl;
    }

    int netCount = 0;
    for (auto count : passengerCount)
    {
        netCount += count;
        if (netCount > capacity)
            return false;
    }

    return true;
}

int main()
{
}