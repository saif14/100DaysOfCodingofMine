#include <bits/stdc++.h>

using namespace std;

//It is simply a fibonacci series problem!!!!! 

int climbStairs(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    int n1 = 1;
    int n2 = 2;
    int c = 3;
    while (c <= n)
    {
        int n = n1 + n2;
        n1 = n2;
        n2 = n;
        c++;
    }

    cout << n2 << endl;
    ;
    return n2;
}

int main()
{
    cout << climbStairs(6);
}