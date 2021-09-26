#include <bits/stdc++.h>

using namespace std;

<<<<<<< HEAD
int maxProfit2(vector<int> &prices)
{
    int l=prices[0],p=0;
        int n=prices.size();
        for(int i=1;i<n;i++){
            cout<<"p - >"<<p;
            p=max(p,prices[i]-l);
            cout<<" "<<p<<endl;
            cout<<"l: "<<l;
            l=min(l,prices[i]);
            cout<<" "<<l<<endl;
        }

        return p;
}
int maxProfit(vector<int> &prices)
{
    

}
int main()
{
    vector<int> v = {7,1,5,3,6,4};
    cout<<maxProfit(v);

=======
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
>>>>>>> e35fb73d14ab2763c54273c0db1bc5d79e0ba8da
}
