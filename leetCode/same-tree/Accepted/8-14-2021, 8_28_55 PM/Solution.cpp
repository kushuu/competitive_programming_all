// https://leetcode.com/problems/same-tree

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
    bool ans = true;
    void dfs(TreeNode* p, TreeNode* q) {
        if(p == nullptr || q == nullptr) {
            if(p == nullptr and q == nullptr) return;
            else {
                ans = false;
                return;
            }
        }
        if(p->val != q->val) {
            ans = false;
            return;
        }
        dfs(p->left, q->left);
        dfs(p->right, q->right);
        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        dfs(p, q);
        return ans;
    }
};