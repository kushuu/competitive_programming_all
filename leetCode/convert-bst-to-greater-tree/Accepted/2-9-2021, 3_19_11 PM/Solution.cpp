// https://leetcode.com/problems/convert-bst-to-greater-tree

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
    void dfs(TreeNode* node, int &prev_val) {
        if(node == nullptr) return ;
        int temp = node->val;
        dfs(node->right, prev_val);
        prev_val += node->val;
        node->val = prev_val - node->val;
        node->val += temp;
        dfs(node->left, prev_val);
    }
    
    TreeNode* convertBST(TreeNode* root) {
        if(root == nullptr) return nullptr;
        int val = 0;
        dfs(root, val);
        return root;
    }
};