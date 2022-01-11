
public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

//		ReverseStringClass r = new ReverseStringClass();
//		System.out.println(r.reverseString("hello"));
//		System.out.println("racecar "+r.isPalindrome("raceca"));
//		System.out.println(decToBin(233, ""));
//		System.out.println(sumSeries(10));
		
		int A[] = {1, 5, 6,100, 2, 30, 45, 67, 39, 41};
//		System.out.println(binarySearch(A, 0, A.length-1, 1));
//		System.out.println("Fib: "+fib(15));
		
		mergeSort(A, 0, A.length-1);
		for(int i = 0; i<A.length; i++) {
			System.out.print(A[i]+" ");
		}
		
	}
	
	/**
	 * 
	 * Converting Decimal to Binary
	 */
	public static String decToBin(int dec, String result) {
		if(dec == 0)
		{
			return result;
		}
		
		result  = dec % 2 + result;
		return decToBin(dec/2, result);
	}
	
	/**
	 * Summing a series of numbers
	 */
	public static int sumSeries(int num) {
		if(num == 1) return num;
		return num + sumSeries(num-1);
	}
	
	/**
	 * Binary Search using Recursion
	 */
	
	public static int binarySearch(int[] A, int left, int right, int x) {
		if(left > right) return -1;
		int mid = (left + right)/2;
		if( x == A[mid])
			return mid;
		
		if(x < A[mid])
			return binarySearch(A, left, mid-1, x);
		
		return binarySearch(A, mid+1, right, x);
	}
	
	/**
	 * Recursive Fibonacci Series
	 */
	
	public static long fib(long n) {
		if(n == 0 || n==1)
		{
			return n;
		}
		
		return fib(n-1) + fib(n-2);
	}
	
	/**
	 * 
	 * 
	 * Merge Sort
	 * 
	 * 
	 */
	
	public static void mergeSort(int a[], int start, int end) {
		if(start < end) {
			int mid = (start + end)/2;
			mergeSort(a, start, mid);
			mergeSort(a, mid+1, end);
			merge(a, start, mid, end);
		}
		
	}

	private static void merge(int[] a, int start, int mid, int end) {
		
		// building a temporary array to avoid modifying original content
		
		int[] temp = new int[end-start+1];
		
		//copying values 
		int i = start, j = mid+1, k = 0;
		
		while(i<=mid && j<=end) {
			if(a[i] <= a[j])
			{
				temp[k++] = a[i++];
			}
			else {
				temp[k++] = a[j++];
			}
		}
		
		while(i<=mid) {
			temp[k++] = a[i++];
		}
		while(j<=end) {
			temp[k++] = a[j++];
		}
		
		for(i = start; i<=end; i++) {
			a[i] = temp[i-start];
		}
		
	}

}
 