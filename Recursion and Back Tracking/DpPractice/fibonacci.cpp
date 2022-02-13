#include <bits/stdc++.h>

using namespace std;

int fib(int n, vector<int> memo)
{
    if(memo[n]) return memo[n];
    if(n<=2) return 1;
    memo[n] = fib(n-1, memo) + fib(n-2, memo);
    return memo[n];
}

int main()
{
    vector<int> memo(30,0);
    cout<<fib(29, memo);
}