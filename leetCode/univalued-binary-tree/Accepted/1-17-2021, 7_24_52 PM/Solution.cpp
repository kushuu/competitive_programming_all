// https://leetcode.com/problems/univalued-binary-tree

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
    bool ans = true;
public:
    void dfs(TreeNode* node, int val) {
        if(node == nullptr) return;
        dfs(node->left, val);
        if(node->val != val) {
            ans = false;
            return;
        }
        dfs(node->right, val);
    }
    bool isUnivalTree(TreeNode* root) {
        if(root == nullptr) return false;
        int check = root->val;
        dfs(root, check);
        return ans;
    }
};