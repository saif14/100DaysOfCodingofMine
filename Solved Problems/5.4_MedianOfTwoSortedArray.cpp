#include<iostream>
#include<bits/stdc++.h>

using namespace std;

double findMedianSortedArray(vector<int>& nums1, vector<int>& nums2)
{
    
    if(nums1.size() > nums2.size())
    {
        return findMedianSortedArray(nums2, nums1);
    }

    int minInt = -2147483647 - 1;
    int maxInt = 2147483647 ;

    int x = nums1.size();
    int y = nums2.size();

    if(x==0)
    {
        
        double median = (y%2!=0) ? nums2[(y-1)/2] : (double)(nums2[y/2]+nums2[y/2-1])/2;
        
        return median;
    }
    
    int low = 0;
    int high = x;
    while(low<=high)
    {
        int partitionX = (low+high)/2;
        int partitionY = (x+y+1)/2-partitionX;

        int maxLeftX   = (partitionX == 0) ? minInt : nums1[partitionX-1];
        int minRightX   = (partitionX == x) ? maxInt : nums1[partitionX];

        int maxLeftY  = (partitionY == 0) ? minInt : nums2[partitionY-1];
        int minRightY  = (partitionY == y) ? maxInt : nums2[partitionY];

        if(maxLeftX <= minRightY && maxLeftY <= minRightX)
        {
            double median = ((x+y)%2==0) ? ((double)max(maxLeftX, maxLeftY) + min(minRightX, minRightY))/2 : max(maxLeftX, maxLeftY) ; 
            return median;

        }
        else if(maxLeftX > minRightY)
        high = partitionX - 1;
        else 
        low = partitionX + 1;

    }

    return 0;

}

int main()
{
    vector<int> nums1 {}; 
    vector<int> nums2 {2,3};
    cout << findMedianSortedArray(nums1, nums2);

}