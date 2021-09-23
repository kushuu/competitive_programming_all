// https://leetcode.com/problems/count-good-nodes-in-binary-tree

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
    
    void dfs(TreeNode* node, int max_) {
        if(node == nullptr) return;
        if(node->val >= max_) ans++;
        dfs(node->left, max(node->val, max_));
        dfs(node->right, max(node->val, max_));
    }
    
    int goodNodes(TreeNode* root) {
        dfs(root, INT_MIN);
        return ans;
    }
};