// https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal

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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.empty()) return NULL;
        int size = preorder.size();
        
        vector<int> less, greater;
        int rootVal = preorder[0];
        for(int i = 1; i < size; i++) {
            if(preorder[i] < rootVal) less.push_back(preorder[i]);
            else greater.push_back(preorder[i]);
        }
        
        TreeNode *ans = new TreeNode(rootVal);
        ans->left = bstFromPreorder(less);
        ans->right = bstFromPreorder(greater);
        
        return ans;
    }
};