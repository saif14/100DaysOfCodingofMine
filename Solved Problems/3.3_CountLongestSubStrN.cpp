#include<iostream>

using namespace std;

 int lengthOfLongestSubstring(string s) {
        int a[200]={0};
        int maxCount=0;
        string tempStr="";
        for(int i=0;i<s.length();i++)
        {
            s[i];
            if(a[s[i]]==0)
            {
                tempStr +=s[i];
                if(tempStr.length()>maxCount)
                maxCount = tempStr.length();
                a[s[i]]++;
            }
            else
            {   
                //a[200]={0};
                fill(begin(a), end(a),0);
                string tempStr2="";
                int flag = 0;
                for(int j=0;j<tempStr.length();j++)
                {
                    if(s[i]!=tempStr[j] && flag==0)
                    continue;
                    else if(s[i]!=tempStr[j] && flag==1)
                    {
                        tempStr2 = tempStr2+tempStr[j];
                        a[tempStr[j]]++;
                    }
                    else
                    {
                        flag =1;
                    }
                }
                tempStr = tempStr2 + s[i];
                a[s[i]] = 1;
                if(tempStr.length()>maxCount)
                maxCount = tempStr.length();
            }

        }

        return maxCount;

        
    }

    int main()
    {
        cout<<lengthOfLongestSubstring("pwwkew");

        
    }