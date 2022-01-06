#include <bits/stdc++.h>

using namespace std;

int numPairsDivisibleBy60(vector<int> &time)
{
    int countPair = 0;
    int sz = time.size();
    vector<int> pairCount(60,0);
    for (int i = 0; i < sz; i++)
    {
        int x = time[i];
        int rem = x%60;
        if(!rem) countPair+=pairCount[0];
        else
        {
            countPair+= pairCount[60-rem];
            
        }

        pairCount[rem]++;
    }

    return countPair;
}

int main()
{
}