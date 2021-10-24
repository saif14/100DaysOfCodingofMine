#include <bits/stdc++.h>

using namespace std;

int R;
int C;
void dfs(vector<vector<char>> &board, int i, int j)
{
    if(i>=0 && i<R && j>=0 && j<C && board[i][j] == '0')
    {
        board[i][j] ='P';
        dfs(board, i-1, j);
        dfs(board, i+1, j);
        dfs(board, i, j-1);
        dfs(board, i, j+1);
    }

}

void solve(vector<vector<char>> &board)
{
    R=board.size();
    C = board[0].size();

    if(R<=2 || C<=2) return;

    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            if( board[i][j] == '0' && (i==0|| i==R-1 || j==0 || j==C-1) )
            {
                dfs(board, i, j);
            }
        }
    }
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            if(board[i][j] == 'P') board[i][j] = 'O';
            else if(board[i][j] == '0') board[i][j] = 'X';
        }
    }

}

int main()
{
    vector<vector<char>> board { {'X','X','X','X'},{'X','O','O','X'},{'X','X','O','X'}, {'X','O','X','X'}}  ;
    solve(board);

}