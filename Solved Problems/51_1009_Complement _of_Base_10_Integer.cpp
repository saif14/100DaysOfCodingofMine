#include <bits/stdc++.h>

using namespace std;

int bitwiseComplement(int n)
{
    if (n == 0)
        return 1;
    unsigned mask = ~0;
    cout << mask;
    while (mask & n)
        mask = mask << 1;
    return ~n ^ mask;
}

int main()
{
    int n = 10;
    printf("%b", n);
}
