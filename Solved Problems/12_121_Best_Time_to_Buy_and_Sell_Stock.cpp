#include <bits/stdc++.h>

using namespace std;

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

}
