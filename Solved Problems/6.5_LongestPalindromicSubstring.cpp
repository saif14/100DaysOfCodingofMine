#include<bits/stdc++.h>

using namespace std;

string longestPalindrome(string s)
{
    if(s.size() == 0 || s.size() == 1 || (s.size()==2 && s[0]==s[1]) ) 
    return s;
    else if(s.size()==2 && s[0]!=s[1])
    {
        s = s[0];
        return s;
    }


    int N = 2*s.size()+1;

    int c=1;
    int i_prime = 0;
    int i = 2;
    int R = 2;

    int diff = 0;

    int l[N];

    int max_lps = -1;
    int max_lps_center = -1;

    int k=0;

    for(i; i<N; i++)
    {
        i_prime = 2*c - i;
        diff = R - i;
        if(diff >=0)
        {
            //case 1
            if(l[i_prime] < diff || (l[i_prime] == diff && R = N-1))
            {
                l[i] = l[i_prime];

            }
            else if(l[i_prime] == diff && R < N-1)
            {
                l[i] = l[i_prime];
                k = 1;
            }
            else if(l[i_prime] > diff)
            {
                l[i] = diff;
                k =1;
            }
            

        }
        else
        {

        }
    }



    return "asdasd";
}

int main()
{

    
    cout<<longestPalindrome("ccc");

}
