import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.LinkedList;
import java.util.List;

public class Sliding_Window_Maximum_80_239_ {

    public static int[] maxSlidingWindow(int[] nums, int k) {
        Deque<Integer> dq = new ArrayDeque<Integer>();
        int r = 0;
        int l = 0;
        int idx = 0;
        int[] res = new int[nums.length-k+1];
        for (; r < nums.length; r++) {
            while (!dq.isEmpty() && nums[dq.peekLast()] < nums[r])
               {
                dq.pollLast();
               }
            dq.add(r);
            if(r-l+1 == k){
                res[idx++] = nums[dq.peekFirst()];
            }
            while(r-l+1 > k){
                if(r - dq.peekFirst() + 1 > k){
                dq.pollFirst();
                }
                res[idx++] = nums[dq.peekFirst()];
                l++;
            }           
        }
        for (int i = 0; i < res.length; i++) {
            System.out.println(res[i]);
        }
        return res;
    }

    public static void main(String[] args) {
        int[] nums = { 1};
        int k = 1;
        int res[] = maxSlidingWindow(nums, k);
        // for(int i =0; i>res.length;i++){
        //     System.out.println(res[i]);
        // }
    }

}