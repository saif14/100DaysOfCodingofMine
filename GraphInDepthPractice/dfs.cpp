#include <bits/stdc++.h>

using namespace std;

class graph
{
    int num_vertex;
    int time;
    vector<vector<int>> adjList;

    //this is the recursive approach for DFS
    void DFS_rec(int s, vector<bool> &visited, vector<int> &pre, vector<int> &post);
    void DFS_iter(int s, vector<bool> &visited);

public:
    graph(int v) : num_vertex(v), adjList(v), time(0)
    {
    }
    void add_edge(int u, int v)
    {
        adjList[u].push_back(v);
    }

    void DFS(int s);
};

void graph::DFS(int s)
{

    //Doing BFS in Recursive Way
    vector<bool> visited(num_vertex, false);
    cout << "Recursive Way: " << endl;
    vector<int> pre(num_vertex);
    vector<int> post(num_vertex);
    for (int i = 0; i < num_vertex; i++)
    {
        if (!visited[i])
        {
            DFS_rec(i, visited, pre, post);
        }
    }

    //Doing DFS in Iterative Way
    vector<bool> visited2(num_vertex, false);
    cout << "Iterative Way:" << endl;
    for (int i = 0; i < num_vertex; i++)
    {
        if (!visited2[i])
        {
            DFS_iter(i, visited2);
        }
    }

    //After DFS, it is printing the Pre and Post Time for Each and Every Node
    cout<<"After DFS, Pre and Post Time of Each Node:"<<endl;
    for(int i=0; i<num_vertex; i++)
    {
        cout<<i<<" "<<"Pre:"<<pre[i]<<" Post:"<<post[i]<<endl; 
    }
}
void graph::DFS_rec(int s, vector<bool> &visited, vector<int> &pre, vector<int> &post)
{
    visited[s] = true;
    cout << s << endl;
    //pre time or starting time for a node
    pre[s] = time++;
    for (auto u : adjList[s])
    {
        if (!visited[u])
        {
            DFS_rec(u, visited, pre, post);
        }
    }
    //post time or ending time of a node
    post[s] = time++;
}
void graph::DFS_iter(int s, vector<bool> &visited)
{
    stack<int> stk;
    stk.push(s);
    visited[s] = true;

    while (!stk.empty())
    {
        int u = stk.top();
        cout << u << " ";
        stk.pop();
        for (auto i : adjList[u])
        {
            if (!visited[i])
            {
                visited[i] = true;
                stk.push(i);
            }
        }
    }
}

int main()
{
    graph g(5);

    g.add_edge(0, 1);
    g.add_edge(0, 3);
    g.add_edge(1, 2);
    g.add_edge(3, 2);
    g.add_edge(3, 4);

    g.DFS(0);
}