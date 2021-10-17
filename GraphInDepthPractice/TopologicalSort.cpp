#include <bits/stdc++.h>

using namespace std;

class graph
{
    int num_vertex;
    int time;
    vector<vector<int>> adjList;
    void top_sort_rec(int s, vector<bool>& visited, stack<int> &stk);
public:
    graph(int v) : num_vertex(v), adjList(v), time(0)
    {
    }
    void add_edge(int u, int v)
    {
        adjList[u].push_back(v);
    }
    void ToplogicalSort();
};

void graph::top_sort_rec(int s, vector<bool>& visited, stack<int> &stk)
{
    visited[s] = true;
    for(int u: adjList[s])
    {
        if(!visited[u]) top_sort_rec(u, visited, stk);
    }

    stk.push(s);

}

void graph::ToplogicalSort()
{
    vector<bool> visited(num_vertex, false);
    stack<int> stk;
    for(int i=0; i<num_vertex; i++)
    {
        if(!visited[i]) top_sort_rec(i, visited, stk);
    }
    
    while(!stk.empty())
    {
        cout<<stk.top()<<" "<<endl;
        stk.pop();
    }
}


int main()
{
    graph g(5);

    g.add_edge(0, 1);
    g.add_edge(1, 2);
    g.add_edge(0, 4);
    g.add_edge(0, 3);
    g.add_edge(3, 4);

    g.ToplogicalSort(); 
}