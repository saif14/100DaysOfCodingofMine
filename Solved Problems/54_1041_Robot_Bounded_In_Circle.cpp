#include <bits/stdc++.h>

using namespace std;

bool isRobotBounded(string instructions)
{

    vector<vector<int>> dir = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
    int i = 0;

    int x = 0;
    int y = 0;
    for (int p = 0; p < instructions.size(); p++)
    {
        if (instructions[p] == 'L')
        {
            i = (i + 1) % 4;
        }
        else if (instructions[p] == 'R')
        {
            i = (i + 3) % 4;
        }
        else
        {
            x = x + dir[i][0];
            y = y + dir[i][1];
        }
    }

    return x == 0 && y == 0 || i != 0;
}

int main()
{
}
