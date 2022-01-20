
public class LinkedListRecur {

	/**
	 * 
	 * @author Saif Mahmud Parvez
	 * 
	 *         class for Linked List
	 *
	 */
	static class ListNode {
		int val;
		ListNode next;

		ListNode() {
		}

		ListNode(int val) {
			this.val = val;
		}

		ListNode(int val, ListNode next) {
			this.val = val;
			this.next = next;
		}

		void setNext(ListNode next) {
			this.next = next;
		}
	}

	public static void main(String[] args) {
		int a[] = { 1, 8, 22, 40};
		int b[] = { 4, 11, 16, 20};
		ListNode n1 = createList(a);
		ListNode n2 = createList(b);
		printLinkedList(n1);
		System.out.println("\n");
		printLinkedList(n2);
		System.out.println("\n");

//		ListNode reverse = reverseList(n1);
//		System.out.println("\nprinting list in reverse");
//		printLinkedList(reverse);
		
		ListNode mergeList = sortedMerge(n1, n2);
		System.out.println("Sorted Merged Linked List");
		printLinkedList(mergeList);
	}

	/**
	 * Inserting into Linked List Recursively
	 * 
	 * @param head
	 * @param val
	 * @return
	 */
	
	public static ListNode insertInList(ListNode head, int val) {
		if (head == null)
			return new ListNode(val);
		head.next = insertInList(head.next, val);
		return head;
	}
	
	/**
	 * Creating a Linked List from and Array
	 * 
	 * @param head
	 * @param val
	 * @return
	 */

	public static ListNode createList(int[] a) {
		ListNode head = null;
		for (int i : a) {
			head = insertInList(head, i);
		}

		return head;
	}

	/**
	 * Reversing a Linked List using Recursion
	 * 
	 */
	public static ListNode reverseList(ListNode head) {
		if (head == null || head.next == null)
			return head;
		ListNode p = reverseList(head.next);
		head.next.next = head;
		head.next = null;
		return p;
	}

	public static void printLinkedList(ListNode node) {
		ListNode temp = node;
		while (temp != null) {
			System.out.print(temp.val + " ");
			temp = temp.next;
		}
	}

	/**
	 * Merging Two Sorted Linked List
	 * 
	 */
	public static ListNode sortedMerge(ListNode a, ListNode b) {
		if (a == null)
			return b;
		if (b == null)
			return a;

		if (a.val < b.val) {
			a.next = sortedMerge(a.next, b);
			return a;
		}

		else {
			b.next = sortedMerge(a, b.next);
			return b;
		}

	}

}
