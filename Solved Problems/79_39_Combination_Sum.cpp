#include <bits/stdc++.h>

using namespace std;

void calcualteTotalWays(vector<int> &candidates, int target, int currIdx, vector<int> &resComp, vector<vector<int>> &result)
{
    if(currIdx == candidates.size())
    {
        if(target == 0)
        {
            result.push_back(resComp);
        }
        return;
    }
    if(candidates[currIdx] <= target)
    {
        resComp.push_back(candidates[currIdx]);
        calcualteTotalWays(candidates, target-candidates[currIdx], currIdx, resComp, result);
        resComp.pop_back();
    }

    calcualteTotalWays(candidates, target, currIdx+1, resComp, result);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> result;
    vector<int> resComp;
    calcualteTotalWays(candidates, target, 0, resComp, result);

    return result;
}

int main()
{
    vector<int> nums{2,4,5};
    vector<vector<int>> res = combinationSum(nums, 6);
    for(auto i : res)
    {
        cout<<"{ ";
        for(int j: i)
        {
            cout<<j<<",";
        }
        cout<<" } ,";
    }
}
