#include <bits/stdc++.h>

using namespace std;

string longestPalindrome(string s)
{
    if (s.size() == 1)
        return s;
    int max_len = INT_MIN;
    if (s.size() == 2)
    {
        if (s[0] == s[1])
            return s;
        else
        {
            string p  ="";
            p += s.at(0);
            return p;
        }
    }
    string sn = "";
    for (int i = 0; i < s.length(); i++)
    {
        sn = sn + '*' + s[i];
    }
    sn += '*';
    string res;
    for (int i = 1; i < sn.length() - 1; i++)
    {
        string tmp = "";

        int p = i - 1, q = i + 1;
        tmp += sn[i];
        while (p >= 0 && q < sn.length() && sn[p] == sn[q])
        {
            string t = sn[p] + tmp;
            t += sn[q];
            tmp = t;
            p--;
            q++;
        }
        int c = tmp.length();
        if (c > max_len)
        {
            max_len = tmp.length();
            res = tmp;
        }
    }
    res.erase(remove(res.begin(), res.end(), '*'), res.end());
    return res;
}

int main()
{
    string s = "ab";
   
    s = longestPalindrome(s);
    cout<<s;
}