#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{
    int m = mat.size();
    int n = mat[0].size();
    if(m*n != r*c)
    return mat;
    vector<int> temp;
    vector<vector<int>> res(r, vector<int> (c,0));
    for(int i=0; i<m*n; i++)
    {
        temp.push_back(mat[i/n][i%n]);
    }
    int t=0;
    for(int p =0; p<r; p++)
    {
        for(int q=0; q<c; q++)
        {
            res[p][q] = temp[t++];
        }
    }
    return res;


}
int main()
{
    vector<vector<int>> mat = {{1,2},{3,4}};
    int r = 1;
    int c = 4;
    vector<vector<int>> res = matrixReshape(mat,r,c);
    for(auto i:res)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
    }
}