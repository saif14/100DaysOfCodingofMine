#include <bits/stdc++.h>

using namespace std;

enum numbers
{
    one,
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine
};

bool isValidSudoku(vector<vector<char>> &board)
{
    map<int, int> count;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            char c = board[i][j];
            if (c == '.')
                continue;
            int ch = 0;
            switch (c)
            {
            case '1':
                ch = one;
            case '2':
                ch = two;
            case '3':
                ch = three;
            case '4':
                ch = four;
            case '5':
                ch = five;
            case '6':
                ch = six;
            case '7':
                ch = seven;
            case '8':
                ch = eight;
            case '9':
                ch = nine;
            }
            int cnt = ++count[ch + 1 + i + j];
            if (cnt > 1)
                return false;
        }
    }
    return true;
}

int main()
{
    vector<vector<char>> board = {{"5","3",".",".","7",".",".",".","."},{"6",".",".","1","9","5",".",".","."},{".","9","8",".",".",".",".","6","."},{"8",".",".",".","6",".",".",".","3"},{"4",".",".","8",".","3",".",".","1"},{"7",".",".",".","2",".",".",".","6"},{".","6",".",".",".",".","2","8","."},{".",".",".","4","1","9",".",".","5"},{".",".",".",".","8",".",".","7","9"}};
    
}
