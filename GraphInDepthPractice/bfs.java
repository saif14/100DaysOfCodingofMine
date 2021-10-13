import java.util.*;
import java.lang.*;
import java.io.*;

public class bfs {
    private int m_v;
    private List<Integer>[] m_adj;
    bfs(int v)
    {
        m_v = v;
        m_adj = new LinkedList[v];
        for(int i=0; i<v; i++)
        {
            m_adj[i] = new LinkedList<Integer>();
        }
    }
    
    public void addEdge(int u, int v){
        m_adj[u].add(v);
        //m_adj[v].add(u); --> for undirected graph
    }

    public void bfs_traverse(int s){
        LinkedList<Integer> q = new LinkedList<Integer>();
        boolean[] visited = new boolean[m_v];
        q.add(s);
        while(!q.isEmpty()){
            int v = q.pop();
            System.out.println(v+" ");
            for(int u: m_adj[v]){
                if(!visited[u])
                {
                    visited[u] = true;
                    q.add(u);
                }
            }
            

        }
    }

    public static void main(String[] args){
        bfs g = new bfs(5);
        g.addEdge(0, 1);
        g.addEdge(0, 3);
        g.addEdge(1, 2);
        g.addEdge(3, 2);
        g.addEdge(3, 4);

        g.bfs_traverse(0);
    }
    
}
