#include <bits/stdc++.h>

using namespace std;

// Top Down Solution
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

/**
 * Bottom Up Soltuin
 *
 *
 */

bool winnerSquareGame2(int n)
{
    vector<bool> dp(n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            if (!dp[i - j * j])
            {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[n];
}

int main()
{
    cout << winnerSquareGame(2);
}