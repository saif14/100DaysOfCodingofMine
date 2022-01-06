#include <bits/stdc++.h>

using namespace std;



bool carPooling(vector<vector<int>> &trips, int capacity)
{

    vector<int> passengerCount;
    for(auto trip: trips)
    {
        passengerCount[trip[1]] +=  trip[0];
        passengerCount[trip[2]] -= trip[0];
    }

    for(auto count: passengerCount)
    {
        if(count > capacity) return false;
    }

    return true;



}

int main()
{
}