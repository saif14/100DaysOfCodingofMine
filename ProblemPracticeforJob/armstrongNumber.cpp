#include<bits/stdc++.h>

using namespace std;

int numberLength(int num)
{
    int l=0;
    while(num>0)
    {
        num/=10;
        l++;
    }
    return l;
}

int power(int num, int order)
{
    if(order == 0)
    return 1;
    return num*power(num, order-1);
}

bool isArmstrongNumber(int num)
{
    int numc = num;
    int n = numberLength(num);
    int sum = 0;
    while(num>0)
    {
        sum+=power(num%10, n);
        num/=10;
    }

    if(sum == numc)
    return true;
    else return false;
}

int main()
{
   cout<<"153: "<<isArmstrongNumber(153)<<endl;
   cout<<"152: "<<isArmstrongNumber(152)<<endl;
   cout<<"371: "<<isArmstrongNumber(371)<<endl;
}