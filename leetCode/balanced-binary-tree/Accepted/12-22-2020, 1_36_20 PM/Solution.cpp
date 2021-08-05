// https://leetcode.com/problems/balanced-binary-tree

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
    int height(TreeNode* node) {
        if(node == NULL) return 1;
        return max(height(node->left) , height(node->right))+1;
    }
    
    void dfs(TreeNode* node, bool& ans) {
        if(node == NULL) return;
        if(abs(height(node->left) - height(node->right)) > 1) {
            ans = false;
            return;
        }
        dfs(node->left, ans);
        dfs(node->right, ans);
    }
    
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        dfs(root, ans);
        return ans;
    }
};