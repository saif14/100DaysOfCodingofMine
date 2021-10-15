#include <bits/stdc++.h>

using namespace std;

bool exist2(vector<vector<char>> &board, string word)
{
    // word = '0'+word;
    // map<char, vector<char>> c_adj_list;
    // int board_sz = board[0].size();
    // bool chk ;
    // for(int i=0; i<board.size();i++)
    // {

    //     for(int j=0; j<board_sz; j++)
    //     {
    //         c_adj_list[board[i][j]].push_back(board[i][j]);
    //         if(i-1>=0)
    //         c_adj_list[board[i][j]].push_back(board[i-1][j]);
    //         if(i+1<board.size())
    //         c_adj_list[board[i][j]].push_back(board[i+1][j]);
    //         if(j-1>=0)
    //         c_adj_list[board[i][j]].push_back(board[i][j-1]);
    //         if(j+1<board_sz)
    //         c_adj_list[board[i][j]].push_back(board[i][j+1]);
    //     }
    // }


    // if(word.length() == 1 && c_adj_list[word[0]].size() == 1)
    // {
    //     chk = true;
    // }
    // else
    // {
    //     chk = false;
    // }


    // char c_prev = word[1];
    // char c_curr;
    // for(int i=1; i<word.length();i++)
    // {
    //     // char c_find = '0';
    //     // c_prev = word[i-1];
    //     c_curr = word[i];
    //     auto it1 = find(c_adj_list[c_prev].begin(), c_adj_list[c_prev].end(), c_prev);
    //      if(it1 != c_adj_list[c_prev].end())
    //         c_adj_list[c_prev].erase(it1);
    //     auto it = find(c_adj_list[c_prev].begin(), c_adj_list[c_prev].end(), c_curr);
    //     if(it != c_adj_list[c_prev].end())
    //     {
    //         auto it2 = find(c_adj_list[c_curr].begin(), c_adj_list[c_curr].end(), c_prev);
    //         if(it2 != c_adj_list[c_curr].end())
    //         c_adj_list[c_curr].erase(it2);
    //         // c_adj_list[c_prev].erase(it);
    //         chk = true;
    //         c_prev = c_curr;
    //     }
    //     else
    //     {
    //         chk = false;
    //         break;
    //     }

    // }
    // return chk;
}
bool search(vector<vector<char>> &board, int i, int j, string& word, int idx, vector<vector<bool>>& visited)
{
    if(idx == word.length()-1)
    {
        return true;
    }
    visited[i][j] = true;
    if(i>0 && !visited[i-1][j] && board[i-1][j] == word[idx+1] && search(board, i-1, j, word, idx+1, visited))
    return true;
    if(j>0 && !visited[i][j-1] && board[i][j-1] == word[idx+1] && search(board, i, j-1, word, idx+1, visited))
    return true;
    if(i<board.size()-1 && !visited[i+1][j] && board[i+1][j] == word[idx+1] && search(board, i+1, j, word, idx+1, visited))
    return true;
    if(j<board[0].size()-1 && !visited[i][j+1] && board[i][j+1] == word[idx+1] && search(board, i, j+1, word, idx+1, visited))
    return true;
    visited[i][j] = false;
    return false;
}
bool exist(vector<vector<char>> &board, string word)
{
    int r = board.size();
    int c = board[0].size();
    vector<vector<bool>> visited(r, vector<bool>(c, false));

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(board[i][j] == word[0] && search(board, i, j, word, 0, visited))
            return true;

        }
    }

    return false;

}

int main()
{
    vector<vector<char>> board {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    // vector<vector<char>> board {{'A','A'}};
    string word = "ABCB";
    cout<<exist(board, word);

}
