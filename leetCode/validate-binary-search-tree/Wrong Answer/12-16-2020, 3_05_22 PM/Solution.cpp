// https://leetcode.com/problems/validate-binary-search-tree

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
    void dfs(TreeNode* node, bool& ans) {
        if(node == NULL) {
            return ;
        }
        dfs(node->left, ans);
        
        if(node->left) {
            if(node->left->val > node->val) ans = false;
        }
        if(node->right) {
            if(node->right->val < node->val) ans = false;
        }
        
        dfs(node->right, ans);
    }
    bool isValidBST(TreeNode* root) {
        bool ans = true;
        dfs(root, ans);
        return ans;
    }
};