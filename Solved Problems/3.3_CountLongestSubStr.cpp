#include<iostream>

using namespace std;

 int lengthOfLongestSubstring(string s) {
        int a[200]={0};
        int indx[200] = {0};
        int count = 0;
        int maxCount=0;
        for(int i=0;i<s.length();i++)
        {
            
            if(a[s[i]] ==0)
            {
                count++;
                a[s[i]]++;
            }
            else
            {
                if(count>maxCount)
                maxCount=count;
                count = i - indx[s[i]];
                // if(count>maxCount)
                // maxCount=count;
            }
            indx[s[i]] = i;
            //cout<<indx[s[i]];
        }
        if(count>maxCount)
            maxCount=count;
        return maxCount;

        
    }

    int main()
    {
        cout<<lengthOfLongestSubstring("abba");

        
    }