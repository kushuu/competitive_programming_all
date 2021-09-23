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
    bool ans = false;
    // set<int> check;
    
    void dfs(TreeNode *node, int sum) {
        // cout << sum << " " ;
        if(node == nullptr) return ;
        
        if(node->left == nullptr and node->right == nullptr) {
            if(sum == 0) ans = true;
            else sum += node->val;
        }
        
        dfs(node->left, sum-node->val);
        dfs(node->right, sum-node->val);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return false;
        dfs(root, targetSum - root->val);
        return ans;
    }
};