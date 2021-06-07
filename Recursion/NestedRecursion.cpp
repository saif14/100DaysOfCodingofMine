#include<iostream>

using namespace std;

//Demonstrationg nested recursion

int fun(int n)
{
    if(n>100)
    {
        return n-10;
    }
    return fun(fun(n+11));
}



int main()
{
    int res = fun(95);
    cout<<res;

}