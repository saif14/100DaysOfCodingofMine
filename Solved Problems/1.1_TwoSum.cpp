#include<iostream>
#include<bits/stdc++.h>

using namespace std;


//After sooo long time, I performed so much badly. Need to use my head more. Need a lot of practice.

vector<int> twoSum(vector<int>& nums, int target){
    vector <int> result;
    for(int i=0;i<nums.size();i++)
    {
         for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]+nums[j]==target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
        }
    }

    return result;


}

int main()
{
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(4);
    //nums.push_back(15);
    vector<int> res = twoSum(nums, 6);
    cout<<res[0]<<" "<<res[1];

}