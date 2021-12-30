#include<bits/stdc++.h>

using namespace std;


static int myCompare(string a, string b)
{
    return a.compare(b);
}

int main()
{
    string s[5] = {"saif", "asif", "tumpa", "pavel", "atia"};

    qsort(s, 5, sizeof(const char*), myCompare);
}