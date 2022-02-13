
public class TreeRecur {

	/**
	 * 
	 * @author Saif Mahmud Parvez
	 * 
	 * BST Tree Structure
	 *
	 */
	
	static class TreeNode{
		int val;
		TreeNode left;
		TreeNode right;
		public TreeNode() {
			val = 0;
			left = null;
			right = null;
		}
		public TreeNode(int x) {
			val = x;
			left = null;
			right = null;
		}
		public TreeNode(int x, TreeNode left, TreeNode right) {
			val = x;
			this.left = left;
			this.right = right;
		}
		
	}
	public static void main(String[] args) {
		int keys[] = {15, 10, 20, 8, 12, 16, 25};
		TreeNode root = constructBst(keys);
		printInOrderTraversal(root);
	}
	
	/**
	 * 
	 * @param a
	 * @return
	 * 
	 * Constructing a BST
	 */
	
	public static TreeNode constructBst(int[] a) {
		TreeNode root = null;
		for(int key:a) {
			root = insertIntoBst(root, key);
		}
		return root;
	}

	/**
	 * 
	 * @param root
	 * @param a
	 * @return
	 * 
	 * Inserting into BST Tree
	 */
	public static TreeNode insertIntoBst(TreeNode root, int val) {
		if(root == null) {
			return new TreeNode(val);
		}
		if(val < root.left.val)
			root.left = insertIntoBst(root.left, val);
		else
			root.right = insertIntoBst(root.right, val);
		
		return root;
	}
	
	/**
	 * 
	 * @param root
	 * 
	 * printing the tree in Inorder Traversal
	 */
	public static void printInOrderTraversal(TreeNode root) {
		if(root == null) return;
		printInOrderTraversal(root.left);
		System.out.print(root.val+ " ");
		printInOrderTraversal(root.right);
	}
	
	

}
