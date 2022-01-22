#include <bits/stdc++.h>

using namespace std;
vector<bool> win = vector<bool>(100001);
bool winnerSquareGame(int n)
{

    if (n == 0)
        return false;
    if (win[n] != NULL)
        return win[n];
    bool check = false;
    for (int i = 1; i * i <= n; i++)
    {
        if (!winnerSquareGame(n - i * i))
        {
            check = true;
            break;
        }
    }

    return win[n] = check;
}

int main()
{
    cout << winnerSquareGame(2);
}