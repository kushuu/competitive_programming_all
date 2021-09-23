// https://leetcode.com/problems/symmetric-tree

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
    
    void func(TreeNode *left, TreeNode *right) {
        if(left == nullptr || right == nullptr) return;
        
        if(left->val != right->val) { ans = false; return; }
        if(left->left == nullptr && right->right != nullptr) { ans = false; return; }
        if(left->left != nullptr && right->right == nullptr) { ans = false; return; }
        if(left->right == nullptr && right->left != nullptr) { ans = false; return; }
        if(left->right != nullptr && right->left == nullptr) { ans = false; return; }
        
        
        
        func(left->left, right->right);
        func(left->right, right->left);
    }
    
    
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return false;
        if(root->left == nullptr and root->right != nullptr) return false;
        if(root->left != nullptr and root->right == nullptr) return false;
        if(root->left == nullptr and root->right == nullptr) return true;
        
        
        func(root->left, root->right);
        
        return ans;
    }
};