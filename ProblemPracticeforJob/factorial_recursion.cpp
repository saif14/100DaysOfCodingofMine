#include<bits/stdc++.h>

using namespace std;

int factorial_recur(int num)
{
    if(num == 0)
    return 1;
    else
    {
        return num*factorial_recur(num-1);
    }
}

int main()
{
    cout<<factorial_recur(3);

}