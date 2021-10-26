#include <bits/stdc++.h>

using namespace std;

class trie
{
public:
    trie *children[26];
    bool endOfWord;

    trie() : endOfWord(false)
    {
        for (int i = 0; i < 26; i++)
        {
            children[i] = nullptr;
        }
    }

    void insert(string word)
    {
        trie *curr = this;
        for (char c : word) 
        {
            if (curr->children[c - 'a'] == nullptr)
                curr->children[c - 'a'] = new trie();
            curr = curr->children[c - 'a'];
        }
        curr->endOfWord = true;
    }
};

void dfs(vector<vector<char>> &board, int i, int j, set<string> &res, trie *t, string s)
{
    char c = board[i][j];
    if (c == '$')
        return;
    board[i][j] = '$';
    trie *tr = t->children[c - 'a'];
    if (tr)
    {
        string ss = s + c;
        if (tr->endOfWord)
            res.insert(ss);

        if (i < board.size() - 1)
            dfs(board, i + 1, j, res, tr, ss);
        if (j < board[0].size() - 1)
            dfs(board, i, j + 1, res, tr, ss);
        if (i > 0)
            dfs(board, i - 1, j, res, tr, ss);
        if (j > 0)
            dfs(board, i, j - 1, res, tr, ss);
    }
    board[i][j] = c;
}

vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
{
    if (words.size() == 0)
        return {};
    trie t;
    for (auto str : words)
    {
        t.insert(str);
    }
    set<string> res;
    for (int i = 0; i < board.size(); i++)
    {

        for (int j = 0; j < board[0].size(); j++)
        {

            dfs(board, i, j, res, &t, "");
        }
    }
    vector<string> result_vec(res.begin(), res.end());
    return result_vec;
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
