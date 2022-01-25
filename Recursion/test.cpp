#include <bits/stdc++.h>

using namespace std;

void printReverse(string str, int idx)
{
    if (idx >= str.length())
    {
        return;
    }
    printReverse(str, idx + 1);
    cout << str[idx];
}

void printReverse(const char *str)
{
    if (!*str)
        return;
    printReverse(str + 1);
    cout << *str;
}

void helper(vector<char> &s, int l, int r)
{
    if(l>=r) return;
    s[l] ^= s[r];
    s[r] ^= s[l];
    s[l] ^= s[r];
    helper(s, ++l, --r);
}

void reverseString(vector<char> &s)
{
    
    helper(s, 0, s.size()-1);
    for(char x: s)
    {
        cout<<x<<" ";
    }
}

int main()
{
    vector<char> s  {'h','e','l','l','o'};
    reverseString(s);
    
}