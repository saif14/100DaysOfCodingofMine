#include <bits/stdc++.h>

using namespace std;

class graph
{
    int m_v;
    vector<vector<int>> m_adj;

public:
    graph(int v): m_v(v), m_adj(v){
    }

    void add_edge(int u, int v)
    {
        m_adj[u].push_back(v);
        //m_adj[v].push_back(u);    ----> for undiriected graph
    }

    void BFS(int s);
};

void graph::BFS(int s)
{
    queue<int> q;
    vector<bool> visited(m_v, false);
    q.push(s);
    visited[s] = true;
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        cout<<v<<" ";
        for(auto i: m_adj[v])
        {
            if(!visited[i])
            {
                 q.push(i);
                 visited[i] = true;
            }
        }
    }
}

int main()
{
    graph g(5);
    
    g.add_edge(0,1);
    g.add_edge(0,3);
    g.add_edge(1,2);
    g.add_edge(3,2);
    g.add_edge(3,4);

    g.BFS(0);
}
