#include <bits/stdc++.h>

using namespace std;

bool detectCapitalUse(string word)
{
    int len = word.size();
    int capitalCount = 0;
    for(char c: word)
    {
        if(c-'a' <0)
        {
            capitalCount++;
        }
    }

    if(capitalCount == 0 || capitalCount == len || (capitalCount == 1 & (word[0]-'a')<0))
    return true;
    else return false;
}

int main()
{
    switch(detectCapitalUse("flaG"))
    {
        case 0: cout<<"False"; break;
        case 1: cout<<"True"; break;
    }
}