#include <bits/stdc++.h>

using namespace std;

bool wordPattern(string pattern, string s)
{
    map<string, char> m;

    int c[26] = {};
    string word = "";
    s += " ";
    int i = 0;
    for (auto x : s)
    {
        if (x == ' ')
        {
            // cout << word << endl;
            if (m.count(word) == 0)
            {
                if (c[pattern[i] - 'a'] != 0)
                    return false;

                m[word] = pattern[i];
                c[pattern[i] - 'a']++;
                i++;
            }
            else if (m[word] != pattern[i])
            {
                return false;
            }
            else
                i++;
            word = "";
        }
        else
        {
            word += x;
        }
    }

    i--;
    if(i != pattern.size()-1)
    return false;

    return true;
}

int main()
{
    cout << wordPattern("jquery","jquery");
//     cout << wordPattern("abba", 
// "dog cat cat dog");
}