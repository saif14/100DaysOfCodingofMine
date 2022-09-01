public class _86_1448_Count_Good_Nodes_in_Binary_Tree {
    public static class TreeNode {
		int val;
		TreeNode left;
		TreeNode right;

		TreeNode() {
		}

		TreeNode(int val) {
			this.val = val;
		}

		TreeNode(int val, TreeNode left, TreeNode right) {
			this.val = val;
			this.left = left;
			this.right = right;
		}
	}

	

	public static int dfs(TreeNode root, int currentMax) {
		int count = 0;
		if(root == null) return 0;	
		if(root.val >= currentMax) {
			count++;
			currentMax = root.val;
		}
		count += dfs(root.left, currentMax);
		count += dfs(root.right, currentMax);
		return count;
	}

	public static int goodNodes(TreeNode root) {
		if(root == null) return 0; 

		int count = 1;
		
		count+=dfs(root.left, root.val);
		count+=dfs(root.right, root.val);
		
		return count;
	}

	public static void main(String[] args) {
		TreeNode root = new TreeNode(3);
		TreeNode l1_1 = new TreeNode(1);
		TreeNode l1_2 = new TreeNode(4);
		TreeNode l2_1 = new TreeNode(3);
		TreeNode l2_3 = new TreeNode(1);
		TreeNode l2_4 = new TreeNode(5);
		root.left = l1_1;
		root.right = l1_2;
		l1_1.left = l2_1;
		l1_2.left = l2_3;
		l1_2.right = l2_4;

		int c = goodNodes(root);
		System.out.println(c);

	}

}
