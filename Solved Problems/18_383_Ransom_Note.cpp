#include <bits/stdc++.h>

using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
    sort(ransomNote.begin(), ransomNote.end());
    sort(magazine.begin(), magazine.end());
    int i=0, j =0;
    int count_match=0;
    for(; i<ransomNote.size(); )
    {
        for(; j<magazine.size();)
        {   char a = ransomNote[i];
            char b = magazine[j];
            if(ransomNote[i] == magazine[j])
            {
                count_match++;
                j++;
                break;
            }
            j++;
            
        }
        i++;
    }
    if(count_match != ransomNote.length())
    return false;
    else return true;
}

int main()
{
    cout<<canConstruct("aa", "aab");
}