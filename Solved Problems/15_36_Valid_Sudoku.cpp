#include <bits/stdc++.h>

using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
        //cout<<"row chcking"<<endl;
        for (int i = 0; i < 9; i++)
    {
        map<int,int> r;
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
        cout<<"col chcking"<<endl;
    for (int j = 0; j < 9; j++)
    {
        map<int,int> r;
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
        cout<<"cell chcking"<<endl;
    int k = 0;
    int m = 0;
    int i = 0;
    int j = 0;
    for (i = m; i < m + 3;)
    {
        int r[10]={0};
        for (j = k; j < k + 3; j++)
        {
            if (board[i][j] == '.')
                continue;
            r[board[i][j] - '0']++;
            if (r[board[i][j] - '0'] > 2)
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