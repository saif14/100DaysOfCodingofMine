#include <bits/stdc++.h>

using namespace std;

double myPow(double x, int n)
{
    if (n == 0)
        return 1;
    if (n > 0)
        return x * myPow(x, n - 1);
    if (n < 0)
        return 1 / x * myPow(x, n + 1);
}

int main()
{
    cout << myPow(0.00001,2147483647);
}
