#include <iostream>
#include<vector>

using namespace std;

int maxSubArray(vector<int> &nums)
{

    int max_sum = -9999999;
    int position = 0;
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        int s1 = i==0?nums[0]:nums[i-1] + nums[i];
        int s2 = sum + nums[i];
        if(nums[i] >=s1 && nums[i]>=s2)
        {
            max_sum = nums[i]>max_sum?nums[i]:max_sum;
        }
        else if(s2 < s1){
            position = i-1;
            sum = s1;
            max_sum = sum>max_sum?sum:max_sum;
        }
        else{
            // cout<<"i: "<<i<<" -> "<<s2<<endl;
            sum = s2;
            max_sum = sum>max_sum?sum:max_sum;
        }
    }
    return max_sum;

}

int main()
{
    vector<int> nums = {5,4,-1,7,8};
    cout<<maxSubArray(nums);

}
