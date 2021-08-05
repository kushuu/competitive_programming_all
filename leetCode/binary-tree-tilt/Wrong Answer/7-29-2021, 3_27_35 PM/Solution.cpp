// https://leetcode.com/problems/binary-tree-tilt

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
    int ans = 0;
    
    int dfs(TreeNode* node) {
        if(node == nullptr) return 0;
        
        int left_sum = dfs(node->left);
        int right_sum = dfs(node->right);
        
        ans += abs(left_sum-right_sum);
        if(node->left and node->right)
            return node->val + node->right->val + node->left->val;
        else
            return node->val;
    }
    
    int findTilt(TreeNode* root) {
        int sum = dfs(root);
        return ans;
    }
};