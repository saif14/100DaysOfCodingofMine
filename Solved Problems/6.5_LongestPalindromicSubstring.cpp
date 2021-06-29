#include<bits/stdc++.h>

using namespace std;

int longestPalindrome(string s)
{
    vector<int> d(s.length());
    int len = s.length();
    int flag = (len%2!=0)?0:1;

    int maxLen=-1;

    string resultStr = "";

    for(int i=0, l=0, r=-1; i<len; i++)
    {
        string str="";
        cout<<"crnt "<<s[i]<<endl;
        str = s[i];
        int check = min(d[l + r - i + flag], r - i + 1);
        //cout<<"check "<<check<<endl;
        int k = (i > r) ? 1 : min(d[l + r - i + flag], r - i + 1);
        while(i-k-flag>=0 && i+k<len && s[i-k-flag]==s[i+k])
        {
            cout<<endl<<"s1 "<<s[i-k-flag]<<endl<<" s2 "<<s[i+k]<<endl<<"-----------------"<<endl;
            str = s[i-k-flag] + str + s[i+k];

            k++;
        }


        if(maxLen < k)
        {
            resultStr = str;
        }

        d[i] = k--;
        if(i+k>r)
        {
            l = i - k - flag;
            r = i + k;
        }

        cout<<"=============="<<endl;

    }

    return maxLen;
}

int main()
{

    
    cout<<longestPalindrome("abababc");

}
