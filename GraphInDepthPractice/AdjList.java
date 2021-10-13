import java.util.ArrayList;
import java.util.List;

class  mainClass{
    public static void main(String[] args){
        int v =5;
        List<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>(v);
        for(int i=0; i<v; i++)
        {
            adj.add(new ArrayList<Integer>());
        }

        adj.get(0).add(1);
        adj.get(0).add(3);
        adj.get(1).add(2);
        adj.get(2).add(3);
        adj.get(3).add(4);



        System.out.println("Printing The Neighbour: ");
        for(Integer i: adj.get(1))
        {
            System.out.println(i+" ");
        }
    }
}