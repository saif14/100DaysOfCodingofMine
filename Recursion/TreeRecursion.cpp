#include<iostream>
using namespace std;


//Time Complexity if O((2^(n+1)) -1)...
//it is like 1 + 2 + 4 + 8 = 15 for n =3. 
//it can be converted like 2^0 + 2^1 + 2^2 + 2^3 = 15 = 2^(n+1) - 1
//That is why time complexity is O((2^(n+1)) -1)

//Space Complexity is O(n).....It is because same space is used again and again

void TreeRecurFun(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        TreeRecurFun(n-1);
        TreeRecurFun(n-1);
    }
}



int main()
{
    TreeRecurFun(3);

}