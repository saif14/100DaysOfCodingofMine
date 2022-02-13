#include <bits/stdc++.h>

using namespace std;

void generateAllSubsets(vector<int> &nums, int currIdx, vector<int> &res, vector<vector<int>> &powerSet)
{
    if(currIdx >= nums.size()){
        powerSet.push_back(res);
        return;
    }
    
    int currentVal = nums[currIdx];
    res.push_back(currentVal);
    generateAllSubsets(nums, currIdx+1, res, powerSet);

    res.pop_back();
    generateAllSubsets(nums, currIdx+1, res, powerSet);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> powerSet;
    vector<int> res;
    generateAllSubsets(nums, 0, res, powerSet);
    return powerSet;
}

int main()
{
    vector<int> nums {4, 7, 9};
    vector<vector<int>> powerSet = subsets(nums);
    for(auto i: powerSet)
    {
        cout<<"{";
        for(auto j: i)
        {
            cout<<j<<",";
        }
        cout<<"}";

    }
}