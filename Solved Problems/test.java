import java.util.Arrays;

class test {

    public static int maxFrequency(int[] nums, int k) {
        Arrays.sort(nums);
        int l=0, r=0;
        int maxFreq = 0;
        int total = 0;
        int windowLen = 0;
        while(r <= nums.length-1){
            windowLen = r-l+1;
            total+= nums[r];
            if(nums[r]*windowLen <= total+k){
                // total+=nums[r];
                r++;
                maxFreq = Math.max(maxFreq, windowLen);
            }else{
                total=total-nums[l];
                l++;
            }
        }

        return maxFreq;
    }
    public static void main(String[] args) {
        
        int[] a = {3,9,6};
        int k = 2;
        int sz = maxFrequency(a,k);
        System.out.println(sz);
    }

}