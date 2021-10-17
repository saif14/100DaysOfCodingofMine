#include <bits/stdc++.h>

using namespace std;

<<<<<<< HEAD
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
=======
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
>>>>>>> cd1b56ad936671fe5b7e6854bccd09d816df741f
    }
    return true;
}

int main()
{
<<<<<<< HEAD
    vector<vector<char>> board = {{"5","3",".",".","7",".",".",".","."},{"6",".",".","1","9","5",".",".","."},{".","9","8",".",".",".",".","6","."},{"8",".",".",".","6",".",".",".","3"},{"4",".",".","8",".","3",".",".","1"},{"7",".",".",".","2",".",".",".","6"},{".","6",".",".",".",".","2","8","."},{".",".",".","4","1","9",".",".","5"},{".",".",".",".","8",".",".","7","9"}};
    
}
=======
}
>>>>>>> cd1b56ad936671fe5b7e6854bccd09d816df741f
