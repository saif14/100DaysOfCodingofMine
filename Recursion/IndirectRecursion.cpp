#include<iostream>
using namespace std;

//Here indirect recursion is demonstrated here
//FunA() will call FunB() and again FunB() will call FunA()

void FunB(int);

void FunA(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        FunB(n-1);

    }

}

void FunB(int n)
{
    if(n>1)
    {
        cout<<n<<" ";
        FunA(n/2);
    }

}


int main()
{
    FunA(20);

}