#include <bits/stdc++.h>

using namespace std;

bool validMountainArray(vector<int> &arr)
{
   
    int rightMax = INT_MIN;
    int leftMax = INT_MIN;

    int rightMaxIdx = arr.size() - 1;
    int leftMaxIdx = 0;
    
    int l = 0;
    int r = arr.size() - 1;
    while (l < arr.size() - 1)
    {
        if (arr[l] > leftMax)
        {
            leftMax = arr[l];
            leftMaxIdx = l;
            
        }
        else if(l < arr.size()-2 && arr[l] < leftMax && arr[l+1] >= arr[l] )
        {
            return false;
        }
        if(arr[r] > rightMax)
        {
            rightMax = arr[r];
            rightMaxIdx = r;
           
        }
        else if(r >= 1 && arr[r] < rightMax && arr[r-1] >= arr[r] )
        {
            return false;
        }
        l++;
        r--;

    }

    if(rightMaxIdx == leftMaxIdx) return true;
    else return false;
}

int main()
{
    vector<int> arr = {2,1};
    switch(validMountainArray(arr))
    {
        case 0: cout<<"False"; break;
        case 1: cout<<"True"; break;
    }
}