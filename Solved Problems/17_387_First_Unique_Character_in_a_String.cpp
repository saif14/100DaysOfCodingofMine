#include <bits/stdc++.h>

using namespace std;

int firstUniqChar(string s)
{
    int s_idx[26] ={0};
    int idx = 123456789;
    for (int i = 0; i < s.length(); i++)
    {
        s_idx[s[i] - 'a']++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s_idx[s[i] - 'a'] == 1)
        {
            idx = min(idx, i);
        }
    }
    if((123456789-idx) == 0)
    return -1;
    else
    return idx;
}

int main()
{
    cout << firstUniqChar("z");
}