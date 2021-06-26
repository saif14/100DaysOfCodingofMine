#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int reverse(int x) {
        int MAX_INT_VAL = 2147483647 ;
        int MIN_INT_VAL = -2147483648;
        
        long long int rev_num = 0;
        int neg_flag = (x<0)?1:0;
        
        x = abs(x);
        
        while(x>0)
        {
            rev_num = rev_num*10 + x%10;
            x = x/10;
        }
        
        if(rev_num < MIN_INT_VAL || rev_num > MAX_INT_VAL)
            return 0;
        else
        {
            if(neg_flag == 1)
            {
                return -1*rev_num;
            }
            else
            {
                return rev_num;
            }
        }
        
    }

int main()
{
    cout<< reverse(123);
}