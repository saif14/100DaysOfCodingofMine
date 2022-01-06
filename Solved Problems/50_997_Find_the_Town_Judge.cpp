#include <bits/stdc++.h>

using namespace std;

int findJudge(int n, vector<vector<int>> &trust)
{

    int judge = -1;

    vector<int> n_count(n + 1, 0);

    for (int i = 0; i < trust.size(); i++)
    {

        n_count[trust[i][0]]--;
        n_count[trust[i][1]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (n_count[i] == n - 1)
        {
            judge = i;
        }
        // cout<<endl<<"n "<<n_count[i]<<endl;
    }

    return judge;
}

int main()
{
}