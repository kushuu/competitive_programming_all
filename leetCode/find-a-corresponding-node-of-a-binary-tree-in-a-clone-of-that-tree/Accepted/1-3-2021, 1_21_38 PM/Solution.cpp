// https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return dfs(cloned, target);
    }
    
private:
    TreeNode* dfs(TreeNode* cloned, TreeNode* target) {
        if(!cloned) return NULL;
        if(cloned->val == target->val) return cloned;
        auto left = dfs(cloned->left, target);
        if(left) return left;
        auto right = dfs(cloned->right, target);
        return right;
    }
};