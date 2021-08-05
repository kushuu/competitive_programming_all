// https://leetcode.com/problems/pseudo-palindromic-paths-in-a-binary-tree

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
def pseudoPalindromicPaths(self, node: TreeNode, mask = 0) -> int:
	mask = mask ^ (1 << node.val)
	if node.left and node.right:
		return self.pseudoPalindromicPaths(node.left, mask) + self.pseudoPalindromicPaths(node.right, mask)
	elif node.left or node.right:
		return self.pseudoPalindromicPaths(node.left, mask) if node.left else self.pseudoPalindromicPaths(node.right, mask)
	return int(bin(mask).count('1') <= 1)