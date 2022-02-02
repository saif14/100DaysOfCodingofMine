#include <bits/stdc++.h>

using namespace std;

vector<int> findAnagrams(string s, string p)
{
    int sLen = s.length();
    int pLen = p.length();

    vector<int> res; 

    if(sLen < pLen) return {};

    vector<int> sFreq(26,0);
    vector<int> pFreq(26,0);

    for(int i=0; i<pLen; i++)
    {
        pFreq[p[i]-'a']++;
        sFreq[s[i]-'a']++;
    }

    if(pFreq == sFreq) res.push_back(0);

    for(int i=pLen; i<sLen; i++)
    {
        sFreq[s[i-pLen] - 'a']--;
        sFreq[s[i]-'a']++;
        if(pFreq == sFreq) res.push_back(i-pLen +1);
    }

    return res;



}

int main()
{
    string s = "fdsa";
    string cs = s.substr(0,3);
    cout<<cs;
    // sort(cs.begin(), cs);
}