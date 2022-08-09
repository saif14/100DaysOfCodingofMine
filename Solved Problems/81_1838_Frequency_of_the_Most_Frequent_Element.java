import java.util.Arrays;

class Frequency_of_the_Most_Frequent_Element_81_1838 {
    public static int maxFrequency(int[] nums, int k) {

        Arrays.sort(nums);
        int l = 0, r = 0;
        int maxFreq = 0, total = 0;

        while (r < nums.length) {
            total += nums[r];
            while (nums[r] * (r - l + 1) > total + k) {
                total -= nums[l];
                l++;
            }
            maxFreq = Math.max(maxFreq, r - l + 1);
            r++;
        }

        return maxFreq;
    }

    public static void main(String[] args) {
        int[] a = { 1, 2, 4 };
        int k = 5;
        System.out.println(maxFrequency(a, k));
    }
}