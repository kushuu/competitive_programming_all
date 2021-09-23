// https://leetcode.com/problems/binary-tree-level-order-traversal

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr) return {};
        
        queue<TreeNode*> check;
        check.push(root);
        
        vector<vector<int>> ans;
        while (!check.empty()) {
            ans.emplace_back();
            for (int i = check.size(); i >= 1; i--) {
                TreeNode* curr = check.front(); check.pop();
                ans.back().push_back(curr->val);
                if(curr->left != nullptr) check.push(curr->left);
                if(curr->right != nullptr) check.push(curr->right);
            }
        }
        return ans;
    }
};