#include <bits/stdc++.h>

using namespace std;

string addBinary(string a_str, string b_str)
{

    int c = 0;
    string res = "";
    int sz_a = a_str.size() - 1;
    int sz_b = b_str.size() - 1;
    int s=0;
    while (sz_a >= 0 || sz_b >= 0)
    {
        int a = (sz_a>=0)?a_str[sz_a--]-'0':0;
        int b = (sz_b>=0)?b_str[sz_b--]-'0':0;
        s = (a^b)^c;
        c = (a&b) | (b&c) | (a&c);
        char str = s + '0';
        res = str + res;
        //sz_a--;
        //sz_b--;
    }
    if(c)

    {
        char str = c + '0';
        res = str + res;
    }
    return res;
}
int main()
{
    string a = "1";
    string b = "0";
    string res = addBinary(a, b);

    cout<<res;
}
