#include <bits/stdc++.h>

using namespace std;

int titleToNumber(string columnTitle)
{
    int colNum = 0;
    for(int i=0; i<columnTitle.length(); i++)
    {
        colNum += columnTitle[i] - 'A' + 1;
    }

    return colNum;
}

int main()
{
    cout<<titleToNumber("A");
}
