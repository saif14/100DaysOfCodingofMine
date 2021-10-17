#include <bits/stdc++.h>

using namespace std;


//Cycle Detection for Undirected Graph

class Graph
{
    int numOfNodes;
    vector<vector<int>> adjList;
    bool dfs_rec(int u, vector<bool>& visited, int parent);

public:
    Graph(int v) : numOfNodes(v), adjList(v)
    {
    }
    bool findCycle();
    void addEdges(int u, int v);
};

void Graph::addEdges(int u, int v)
{
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}
bool Graph::dfs_rec(int u, vector<bool>& visited, int parent)
{
    visited[u] = true;
    // cout<<u<<" ";
    for(int v: adjList[u])
    {
        if(visited[v] && v !=parent) return true;
        if(!visited[v] && dfs_rec(v, visited, u)) return true;
    }

    return false;
}

bool Graph::findCycle()
{
    vector<bool> visited(numOfNodes, false);
    for (int i = 0; i < numOfNodes; i++)
    {
        if (!visited[i] &&  dfs_rec(i, visited, -1))
            return true;
    }

    return false;
}

int main()
{
    Graph g(5);
    g.addEdges(0,1);
    // g.addEdges(0,3);
    // g.addEdges(0,4);
    g.addEdges(1,2);
    g.addEdges(2,4);
    g.addEdges(4,3);

    cout<<boolalpha<<g.findCycle();
}