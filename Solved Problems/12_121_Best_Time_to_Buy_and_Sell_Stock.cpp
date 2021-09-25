#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int> &prices)
{
    int low_price = prices[0];
    int profit = 0;
    for(int i=1;i<prices.size();i++)
    {
        
        profit = max(prices[i]-low_price, profit);
        low_price = min(prices[i], low_price);
        
    }
    return profit;
}

int main()
{
    vector<int> prices = {7,1,5,3,6,4};
    cout<<maxProfit(prices);
}
