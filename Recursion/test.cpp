#include<iostream>

using namespace std;



int main()
{
    int *p = new int[5];
    p[0] = 5;
    p[2] = 7;
    cout<<p[1];
}