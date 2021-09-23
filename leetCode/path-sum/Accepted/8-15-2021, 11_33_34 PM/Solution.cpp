// https://leetcode.com/problems/path-sum

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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        // if it reaches to the end and the val is equal to the sum, return true
        if(root->val == targetSum && root->left == NULL && root->right == NULL) return true;
        // traverse left node and right node, check sum-root->val
        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum-root->val);
    }
};