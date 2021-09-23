// https://leetcode.com/problems/sum-of-left-leaves

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
    
    void dfs(TreeNode *node) {
        if(node == nullptr) return;
        if(node->left) {
            if(node->left->left == nullptr and node->left->right == nullptr) ans+=node->left->val;
        }
        dfs(node->left);
        dfs(node->right);
        
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        dfs(root);
        return ans;
    }
};