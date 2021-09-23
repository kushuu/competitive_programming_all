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
    
    void dfs(TreeNode *node, int max_) {
        if(node == nullptr) return;
        if(node->val >= max(max_, node->val)) ans++;
        dfs(node->left, max(max_, node->val));
        dfs(node->right, max(max_, node->val));
    }
    
    
    int goodNodes(TreeNode* root) {
        dfs(root, INT_MIN);
        return ans;
    }
};