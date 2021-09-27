#include <bits/stdc++.h>

using namespace std;

bool isValidSudoku(vector<vector<char>> &board)
{

    //checking row duplicate

    for (int i = 0; i < 9; i++)
    {
        vector<int> r(9);
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] == '.')
                continue;
            r[board[i][j] - '0']++;
            if (r[board[i][j]] > 2)
                return false;
        }
    }
    //column check
    for (int j = 0; j < 9; j++)
    {
        vector<int> r(9);
        for (int i = 0; i < 9; i++)
        {
            if (board[i][j] == '.')
                continue;
            r[board[i][j] - '0']++;
            if (r[board[i][j]] > 2)
                return false;
        }
    }

    //cell check
    int k = 0;
    int m = 0;
    int i = 0;
    int j = 0;
    for (i = m; i < m + 3;)
    {
        vector<int> r(3);
        for (j = k; j < k + 3; j++)
        {
            if (board[i][j] == '.')
                continue;
            r[board[i][j] - '0']++;
            if (r[board[i][j]] > 2)
                return false;
        }
        i++;
        if (i == m + 3)
        {
            i = 0;
            k += 3;
            
        }
        if (k == 9)
        {
            k = 0;
            i = m + 3;
            m += 3;
            for(auto p:r)
            {
                p = 0;
            }
        }
        if (m >= 9)
            break;
    }
    return true;
}

int main()
{
}