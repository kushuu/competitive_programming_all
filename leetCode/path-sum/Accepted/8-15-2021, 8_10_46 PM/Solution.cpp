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
    set<int> check;
    
    void dfs(TreeNode *node, int sum) {
        if(node == nullptr) return ;
        
        // cout << node->val << " " << sum << endl;
        if(node->left) dfs(node->left, sum + node->left->val);
        
        if(node->left == nullptr and node->right == nullptr) {
            check.insert(sum);
            sum -= node->val;
        }
        
        if(node->right) dfs(node->right, sum + node->right->val);
        
        sum -= node->val;
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return false;
        int sum = root->val;
        dfs(root, sum);
        // for(auto i : check) cout << i << " " ;
        return check.find(targetSum) != check.end();
    }
};