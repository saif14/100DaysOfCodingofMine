#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// class Graph
// {
//     int v;
//     vector<vector<int>> adj(v);

// public:
//     //add edge
//     //print neighbours
//     //print the graph
// };

int main()
{
    int v = 5;
    vector<vector<int>> adj(v);
    adj[0].push_back(1);
    adj[0].push_back(3);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(4);

    //printing the neighbours

    for(auto i: adj[0])
    {
        cout<<i<<" ";
    }
}