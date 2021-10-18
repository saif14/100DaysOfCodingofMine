#include <bits/stdc++.h>

using namespace std;

class graph
{
    int num_vertex;
    int time;
    vector<vector<int>> adjList;
    void vertice_order(int s, vector<bool> &visited, stack<int> &stk);
    graph reverseGraph();
    void dfs(vector<bool> &visited, int s);

public:
    graph(int v) : num_vertex(v), adjList(v), time(0)
    {
    }
    void add_edge(int u, int v)
    {
        adjList[u].push_back(v);
    }
    void StronglyConnectedComponent();
};

graph graph::reverseGraph()
{
    graph g(num_vertex);
    for (int i = 0; i < num_vertex; i++)
    {
        for (int u : adjList[i])
        {
            g.adjList[u].push_back(i);
        }
    }
    return g;
}

void graph::dfs(vector<bool> &visited, int s)
{
    visited[s] = true;
    cout << s << " ";
    for (int u : adjList[s])
    {
        if (!visited[u])
            dfs(visited, u);
    }
}

void graph::vertice_order(int s, vector<bool> &visited, stack<int> &stk)
{
    visited[s] = true;
    for (int u : adjList[s])
    {
        if (!visited[u])
            vertice_order(u, visited, stk);
    }

    stk.push(s);
}

void graph::StronglyConnectedComponent()
{
    vector<bool> visited(num_vertex, false);
    stack<int> stk;
    for (int i = 0; i < num_vertex; i++)
    {
        if (!visited[i])
            vertice_order(i, visited, stk);
    }

    graph g = reverseGraph();

    for (int i = 0; i < num_vertex; i++)
        visited[i] = false;

    while (!stk.empty())
    {
        int v = stk.top();
        stk.pop();
        if (!visited[v])
        {
            g.dfs(visited, v);
            cout << endl;
        }
    }
}

int main()
{
    graph g(9);

    g.add_edge(0, 1);
    g.add_edge(1, 2);
    g.add_edge(2, 3);
    g.add_edge(3, 0);
    g.add_edge(2, 4);
    g.add_edge(4, 5);
    g.add_edge(5, 6);
    g.add_edge(6, 4);
    g.add_edge(7, 6);
    g.add_edge(7, 8);

    g.StronglyConnectedComponent();
}