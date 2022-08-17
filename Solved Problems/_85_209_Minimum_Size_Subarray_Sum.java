public class _85_209_Minimum_Size_Subarray_Sum {
    public static int minSubArrayLen(int target, int[] nums) {
		int minLen = Integer.MAX_VALUE;
		int l=0, r=0;
		int sum = 0;
		for(;r<nums.length; r++) {
			if(sum<target) {
				sum+=nums[r];
			}
			if(sum>=target) {
//				minLen = Math.min(minLen, r-l+1);
				while(sum>=target) {
					minLen = Math.min(minLen, r-l+1);
					sum-=nums[l];
					l++;
				}
			}
		}
		
		return minLen == Integer.MAX_VALUE?0:minLen;
	}

	public static void main(String[] args) {
		int[] nums = {1,1,1,1,1,1,1,1};
		int target = 11;
		System.out.println(minSubArrayLen(target, nums ));
	}
}
