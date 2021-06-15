#include<iostream>

using namespace std;

//nCr = n!/r!*(n-r)!
//Two recursive way this problem will be solved

//Firstway ---> Directly implementing the equation, using factorial

int fact(int n)
{
    if(n==0)
    return 1;
    return fact(n-1)*n;
}
//First Way
int nCr1(int n, int r)
{
    int num, den; //num = numerator, den = denominator
    num = fact(n);
    den = fact(r)*fact(n-r);
    return num/den;
}

//Now the 2nd recursive way
int nCr2(int n, int r)
{
    if(n==r || r==0)
    return 1;
    return nCr2(n-1, r-1)+nCr2(n-1,r); //Here, pasacals triangle way is used
    
}


int main()
{
    cout<<"nCR: "<<nCr2(4,2);

}