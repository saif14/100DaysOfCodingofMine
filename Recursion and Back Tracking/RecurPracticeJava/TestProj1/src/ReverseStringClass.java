
public class ReverseStringClass {

	/**
	 * Reversing a string using recursion
	 */

	public String reverseString(String str) {
		if (str.equals("")) {
			return "";
		}

		return reverseString(str.substring(1)) + str.charAt(0);
	}
	/**
	 * Checking a string is palindrome
	 */
	
	public boolean isPalindrome(String str) {
		if(str.length() == 0 || str.length() ==1) {
			return true;
		}
		if(str.charAt(0) == str.charAt(str.length()-1)) {
			return isPalindrome(str.substring(1, str.length()-1));
		}
		
		return false;
	}
	

}
