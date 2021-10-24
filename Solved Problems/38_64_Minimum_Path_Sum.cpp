#include <bits/stdc++.h>

using namespace std;

int minPathSum(vector<vector<int>> &grid)
{
    int p = grid.size();
    int q = grid[0].size();

    if(p == 0 || q == 0) return 0;
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            if(i-1 >=0 && j-1>=0)
            {
                grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
            }
            else
            {
                if(i-1>=0) grid[i][j] += grid[i-1][j];
                if(j-1>=0) grid[i][j] += grid[i][j-1];
            }
        }
    }
    return grid[p-1][q-1];

}

int main()
{
    vector<vector<int>> grid {{1,2,3}, {4,5,6}};
    cout<<minPathSum(grid);
}