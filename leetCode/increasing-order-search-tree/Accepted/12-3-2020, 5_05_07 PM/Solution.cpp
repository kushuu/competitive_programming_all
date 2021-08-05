// https://leetcode.com/problems/increasing-order-search-tree

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
    TreeNode* temp = new TreeNode(0);
    TreeNode* ans = temp;
    
    void dfs(TreeNode* root) {
        if(root==NULL) return;
        
        dfs(root->left);
        temp->right = new TreeNode(root->val);
        temp = temp->right;
        dfs(root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        dfs(root);
        return ans->right;
    }
};