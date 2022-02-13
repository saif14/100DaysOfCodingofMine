#include<bits/stdc++.h>

using namespace std;

bool isPowerOfTwo(int n)
{
    if(n==1) return true;
    if(n<=0 || n%2!=0) return false;
    return isPowerOfTwo(n/2);
}

bool isPowerOfN(int num, int base)
{
    if(num==1) return true;
    if(num<=0 || num%base != 0) return false;
    return isPowerOfN(num/base, base);
}

int main()
{
    cout<<isPowerOfN(25, 5);

}