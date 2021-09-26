#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> res;
    vector<int> temp;
    if (numRows == 1)
    {
        temp.push_back(1);
        res.push_back(temp);
        return res;
    }
    else if (numRows == 2)
    {
        temp.push_back(1);
        res.push_back(temp);
        temp.push_back(1);
        res.push_back(temp);
        return res;
    }
    temp.push_back(1);
    res.push_back(temp);
    temp.push_back(1);
    res.push_back(temp);
    for (int j = 3; j <= numRows; j++)
    {
        vector<int> t2;
        t2.push_back(1);
        int e = j - 2;
        while (e >= 1)
        {
            t2.push_back(res[j - 2][e - 1] + res[j - 2][e]);
            e--;
        }
        t2.push_back(1);
        res.push_back(t2);
    }
    return res;
}

int main()
{
    generate(5);
}