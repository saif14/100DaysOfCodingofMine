#include<bits/stdc++.h>


using namespace std;

 int singleNumber(vector<int>& nums) {
        map<int,int> m;
        int res;
        for(auto i: nums)
        {
            m[i]++;
        }
        for(auto i: m)
        {
            if(i.second <2)
            {
                res = i.first;
                break;
            }
        }
        
        return res;
        
    }

int main()
{
    vector<int> nums{2,2,1};
    cout<<singleNumber(nums);
}