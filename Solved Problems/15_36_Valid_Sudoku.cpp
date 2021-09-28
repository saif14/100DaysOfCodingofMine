#include <bits/stdc++.h>

using namespace std;

bool isValidSudoku(vector<vector<char>> &board)
{
    //cout<<"row chcking"<<endl;
    for (int i = 0; i < 9; i++)
    {
        map<int, int> r;
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] == '.')
                continue;
            r[board[i][j] - '0']++;
            if (r[board[i][j] - '0'] > 1)
                return false;
        }
    }
    //column check
    cout << "col chcking" << endl;
    for (int j = 0; j < 9; j++)
    {
        vector<int> r(10);
        for (int i = 0; i < 9; i++)
        {
            if (board[i][j] == '.')
                continue;
            r[board[i][j] - '0']++;
            if (r[board[i][j] - '0'] > 1)
                return false;
        }
    }

    //cell check
    cout << "cell chcking" << endl;
    int k = 0;
    int m = 0;
    int i = 0;
    int j = 0;
    int r[10] = {0};
    for (i = m; i < m + 3;)
    {

        for (j = k; j < k + 3; j++)
        {
            // cout<<"i: "<<i<<" j:"<<j<<endl;
            if (board[i][j] == '.')
                continue;
            r[board[i][j] - '0']++;

            if (r[board[i][j] - '0'] > 1)
                return false;
        }
        i++;
        if (i == m + 3)
        {
            i = m;
            k += 3;
            for (int p = 0; p < 10; p++)
            {
                // cout<<"p--> "<<p<<endl;
                r[p] = 0;
            }
            // cout<<"---------"<<endl;
        }
        if (k == 9)
        {
            k = 0;
            i = m + 3;
            m += 3;
        }
        if (m >= 9)
            break;
    }
    return true;
}

int main()
{
}