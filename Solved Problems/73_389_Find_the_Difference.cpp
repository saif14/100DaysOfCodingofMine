#include <bits/stdc++.h>

using namespace std;

char findTheDifference(string s, string t)
{

    int  charCount[26]= {};
    char res;

    for (int i = 0; i < t.size(); i++)
    {
        if (i < s.size())
        {
            charCount[s[i] - 'a']++;
        }

        charCount[t[i] - 'a']--;
    }

    for (int i=0; i<26; i++)
    {
        if (charCount[i] == -1)
        {
            res = i + 'a';
        }
    }

    return res;
}

int main()
{
    string s = "abcd";
    string t = "abcde";

    cout<<findTheDifference(s,t);
}