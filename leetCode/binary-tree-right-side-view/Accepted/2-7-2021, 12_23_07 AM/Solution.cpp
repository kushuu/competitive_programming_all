// https://leetcode.com/problems/binary-tree-right-side-view

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
    vector<int> ans;
public:
    void ff(TreeNode* node, int dep, int *max_dep) {
        if(node == nullptr) return;
        if(*max_dep < dep) {
            ans.push_back(node->val);
            *max_dep = dep;
        }
        ff(node->right, dep+1, max_dep);
        ff(node->left, dep+1, max_dep);
        
    }
    vector<int> rightSideView(TreeNode* root) {
        if(root == nullptr) return {};
        int max_dep = 1;
        ans.push_back(root->val);
        ff(root, 1, &max_dep);
        return ans;
    }
};