import java.util.*;
import java.lang.*;
import java.io.*;

public class TopologicalSort {
    private int numVertex;
    private List<Integer>[] adjList;

    TopologicalSort(int numVertex) {
        this.numVertex = numVertex;
        adjList = new LinkedList[numVertex];
        for (int i = 0; i < numVertex; i++) {
            adjList[i] = new LinkedList<Integer>();
        }
    }

    public void addEdge(Integer u, Integer v) {
        adjList[u].add(v);
    }

    private void TopoSortRecur(int s, boolean[] visited, Stack<Integer> stk ){
        visited[s] = true;
        for(int u:adjList[s]){
            if(!visited[u]) TopoSortRecur(u, visited, stk);
        }
        stk.push(s);
    }

    public void TopologicalSortAlgo(){
        boolean[] visited = new boolean[numVertex];
        Stack<Integer> stk = new Stack<>();
        for(int i=0; i<numVertex; i++){
            if(!visited[i]) TopoSortRecur(i, visited, stk);
        }
        while(!stk.empty()){
            System.out.print(stk.pop()+" ");
            
        }

    }

   public static void main(String[] args) {
       TopologicalSort g = new TopologicalSort(5);
       g.addEdge(0, 1);
       g.addEdge(1, 2);
       g.addEdge(0, 4);
       g.addEdge(0, 3);
       g.addEdge(3, 4);

       g.TopologicalSortAlgo();
   }


}
