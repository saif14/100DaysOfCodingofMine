#include<iostream>
using namespace std;


//Converting Head Recursion to Loop

//Recursive Function

void RecurFun(int n)
{
    if(n>0)
    {
        RecurFun(n-1);
        cout<<n<<" ";
    }

}

//Converting this Recursive Function to Loop
//It cannot be exactly converted to loop. Raher Small
//chagnes needs to be made

void ConvertedLoopFunction(int n)
{
    //setting the base to 1 as  because n>0. It means the minimum value of n is 1
    int i=1;
    while (i<=n)
    {
        cout<<i<<" ";
        i++; //instead of decreasing, here i is increasing. This is the change
    }
    

}

int main()
{
    cout<<"Output of Recursive Function ";
    RecurFun(5);
    cout<<"\n"<<"Output after converting the Recursive Function to Loop ";
    ConvertedLoopFunction(5);

}