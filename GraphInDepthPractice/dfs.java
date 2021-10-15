import java.util.*;
import java.lang.*;
import java.io.*;

public class dfs {
    private int numVertex;
    private List<Integer>[] adjList;
    dfs(int numVertex)
    {
        this.numVertex = numVertex;
        adjList = new LinkedList[numVertex];
        for(int i=0; i<numVertex; i++)
        {
            adjList[i] = new LinkedList<Integer>();
        }
    }
    public void addEdge(int u, int v){
        adjList[u].add(v);
    }

    private void DFS_rec(int s, boolean[] visited){
        visited[s] = true;
        System.out.println(s);
        for(int u:adjList[s]){
            if(!visited[u]){
                DFS_rec(u, visited);
            }
        }
    }

private void DFS_iter(int s, boolean[] visited)
{
    Stack<Integer> stk = new Stack<>();
    stk.push(s);
    visited[s] = true;

    while (!stk.empty())
    {
        int u = stk.peek();
        System.out.println(u);
        stk.pop();
        for (int i : adjList[u])
        {
            if (!visited[i])
            {
                visited[i] = true;
                stk.push(i);
            }
        }
    }
}
    
    public void dfs_traverse(int s){
        System.out.println("DFS Recursive");
        boolean[] visited = new boolean[numVertex];
        for(int i=0; i<numVertex; i++)
        {
            if(!visited[i])
            {
                DFS_rec(i, visited);
            }
        }
        System.out.println("DFS Iterative");
        boolean[] visited2 = new boolean[numVertex];
        for(int i=0; i<numVertex; i++)
        {
            if(!visited2[i])
            {
                DFS_iter(i, visited2);
            }
        }
    }

    public static void main(String[] args){
        dfs g = new dfs(5);
        g.addEdge(0, 1);
        g.addEdge(0, 3);
        g.addEdge(1, 2);
        g.addEdge(3, 2);
        g.addEdge(3, 4);

        g.dfs_traverse(0);
    }

}
