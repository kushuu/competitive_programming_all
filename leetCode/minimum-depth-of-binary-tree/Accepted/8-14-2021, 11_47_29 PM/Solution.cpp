// https://leetcode.com/problems/minimum-depth-of-binary-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = INT_MAX;
    
    void dfs(TreeNode *node, int depth) {
        if(node == nullptr) return;
        if(node->right == nullptr and node->left == nullptr) ans = min(ans, depth);
        dfs(node->left, depth+1);
        dfs(node->right, depth+1);
    }
    
    int minDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        int depth = 1;
        dfs(root, depth);
        return ans;
    }
};