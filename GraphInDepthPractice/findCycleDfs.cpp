#include <bits/stdc++.h>

using namespace std;

enum node_states{
    UNIVISITED,
    INSTACK,
    VISITED
};

class Graph
{
    int numbOfVertex;
    vector<vector<int>> adjList;
    bool DFS_recur(int s, vector<node_states> visited);

public:
    void add_edge(int u, int v)
    {
        adjList[u].push_back(v);
    }
    bool findCycleInGrpah(int s);
    Graph(int numberOfV): numbOfVertex(numberOfV), adjList(numberOfV)
    {

    }
};

bool Graph::DFS_recur(int s, vector<node_states> visited)
{
    visited[s] = INSTACK;
    
    for (auto u : adjList[s])
    {
        if (!visited[u])
        {
            DFS_recur(u, visited);
        }
    }
   
}
bool Graph::findCycleInGrpah(int s)
{
    vector<node_states> visited(numbOfVertex, UNIVISITED);
    for(int i=0; i< numbOfVertex; i++)
    {   if(visited[i] == UNIVISITED && DFS_recur(i, visited) == true)
            return true;
    }
    return false;
}

int main()
{
    Graph g(5);

    g.add_edge(0, 1);
    g.add_edge(0, 3);
    g.add_edge(1, 2);
    g.add_edge(3, 2);
    g.add_edge(3, 4);

    g.findCycleInGrpah(0);
}