#include<bits/stdc++.h>

using namespace std;

void insertion_sort(int *a, int sz)
{
    for(int i=1; i<sz; i++)
    {
        int key = a[i];
        int j = i-1;
        while(j>=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--; 
        }
        a[j+1] = key;
    }

}

int main()
{
    int a[9] = {9,8,7,6,5,4,3,2,1};
    insertion_sort(a, 9);
    for(int i=0; i<sizeof(a)/sizeof(a[0]);i++)
    {
        cout<<a[i]<<" ";
    }
}   