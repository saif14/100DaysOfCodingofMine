#include<iostream>

using namespace std;

int power(int n, int m)
{
    if(m==0)
    {
        return 1;
    }
    return power(n, m-1)*n;
}

//New version of power function
//it takes less time than the previous one
int power2(int n, int m)
{
    if(m==0)
    return 1;
    if(m%2==0)
    {
        return power2(n*n, m/2);
    }
    else
    {
        return n*power2(n*n, (m-1)/2);
    }

}

int main()
{
    cout<<"Power "<<power2(2,5);
    
}