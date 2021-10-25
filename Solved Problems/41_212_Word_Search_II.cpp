#include <bits/stdc++.h>

using namespace std;

bool dfs(vector<vector<char>> &board, string &word, int i, int j, int idx, vector<vector<bool>> &visited)
{
    if (idx == word.length() - 1)
        return true;
    visited[i][j] = true;
    if (i > 0 && !visited[i - 1][j] && board[i - 1][j] == word[idx + 1] && dfs(board, word, i - 1, j, idx + 1, visited))
        return true;
    if (i < board.size() - 1 && !visited[i + 1][j] && board[i + 1][j] == word[idx + 1] && dfs(board, word, i + 1, j, idx + 1, visited))
        return true;
    if (j > 0 && !visited[i][j - 1] && board[i][j - 1] == word[idx + 1] && dfs(board, word, i, j - 1, idx + 1, visited))
        return true;
    if (j < board[0].size() - 1 && !visited[i][j + 1] && board[i][j + 1] == word[idx + 1] && dfs(board, word, i, j + 1, idx + 1, visited))
        return true;
    visited[i][j] = false;
    return false;
}

bool exist(vector<vector<char>> &board, string word)
{
    int r = board.size();
    int c = board[0].size();

    vector<vector<bool>> visited(r, vector<bool>(c, false));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (board[i][j] == word[0] && dfs(board, word, i, j, 0, visited))
                return true;
        }
    }
    return false;
}

vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
{

    vector<string> res;

    for (auto w : words)
    {
        if (exist(board, w))
            res.push_back(w);
    }
    return res;
}

int main()
{
    vector<vector<char>> board{{'o', 'a', 'a', 'n'}, {'e', 't', 'a', 'e'}, {'i', 'h', 'k', 'r'}, {'i', 'f', 'l', 'v'}};
    vector<string> words{"oath", "pea", "eat", "rain"};
    vector<string> res = findWords(board, words);
    for (auto i : res)
    {
        cout << i << endl;
    }
}