#include<iostream>

using namespace std;

//Tailor Series is like below
// e^x = 1 + x/1! + x^2/2! + x^3/3! + x^4/4! + ..... + n

//Solving it Recursive method which is of O(n^2)
double e1(int x, int n)
{
    static double p=1, f=1; // p--> numerator, f---> denominator
    double result;
    if (n==0)
    return 1;
    result=e1(x, n-1);
    p*=x;
    f*=n;
    return result+p/f;

}

//Solving it Recursively with O(n) ---> Horner's Rule

double e2(int x, int n)
{
    static double s; //s ===> the summation
    if(n==0)
        return s;
    s = 1+x*s/n;
    return e2(x,n-1);

}


//Solving it with iterative method
double e(int x, int n)
{
    double s=1;
    int i;
    double num = 1; //num means numerator
    double den = 1; //den means denominator 
    // x^2 --> Numerator
    // 2! ---> denominator
    
    for(i=1; i<=n; i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }

    return s; 

}


int main()
{
    cout<<e2(2,10);

}