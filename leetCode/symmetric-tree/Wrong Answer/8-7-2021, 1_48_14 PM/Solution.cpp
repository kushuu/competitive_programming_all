// https://leetcode.com/problems/symmetric-tree

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
    bool ans = true;
    bool dfs(TreeNode* node) {
        if(node == nullptr) return true;
        
        if(node->left and node->right) if(node->left->val != node->right->val) return false;
        bool left_val = dfs(node->left);
        bool right_val = dfs(node->right);
        return left_val==right_val;
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return false;
        
        return dfs(root);        
    }
};