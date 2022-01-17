#include <bits/stdc++.h>

using namespace std;

int maxDistToClosest(vector<int> &seats)
{
    int maxDis = 0;
    int count = 0;
    int oneCount = 0;
    for (int i = 0; i < seats.size(); i++)
    {
        // cout<<seats[i]<<" ";

        if (seats[i] == 1)
        {
            oneCount++;
        }

        if (seats[i] == 1 && count > 0)
        {
            
            if (oneCount > 1)
            {
                count++;
                maxDis = max(maxDis, count / 2);
                oneCount = 1;
            }
            else if (oneCount == 1)
            {
                maxDis = max(count, maxDis);
            }
            count = 0;
        }
        else if (seats[i] == 0)
        {
            count++;
            if (i == (seats.size() - 1))
            {
                maxDis = max(count, maxDis);
            }
        }
    }

    return maxDis;
}

int main()
{
    vector<int> seats = {0,0,0,0,1};
    cout << "maxDis: " << maxDistToClosest(seats);
}