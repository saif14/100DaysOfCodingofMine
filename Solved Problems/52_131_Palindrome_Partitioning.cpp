#include <bits/stdc++.h>

using namespace std;


    bool isPalindrome(string str, int start, int end)
{

    while(start <= end)
    {
        if(str[start++] != str[end--] )
        {
            return false;
        }
    }

    return true;

}

void helper(string s, int idx, vector<vector<string>>& res, vector<string>& part)
{

    if(idx == s.size())
    {

        res.push_back(part);
    }

    for(int i=idx; i< s.size(); i++)
    {

        if(isPalindrome(s, idx, i))
        {

            part.push_back(s.substr(idx, i-idx+1));
            helper(s, i+1, res, part);
            part.pop_back();
        }
    }
}


vector<vector<string>> partition(string s)
{
    vector<vector<string>> res;
    vector<string> part;

    helper(s, 0, res, part);

    return res;

}

int main()
{
    
}