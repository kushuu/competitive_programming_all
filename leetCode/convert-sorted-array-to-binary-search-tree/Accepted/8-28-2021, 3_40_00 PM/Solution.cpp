// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree

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
// class Solution {
// public:
//     TreeNode* form(vector<int> nums, int start, int end) {
//         if(start > end) return nullptr;
        
//         int mid = start + (end-start)/2;
//         TreeNode *node = new TreeNode(nums[mid]);
//         node->left = form(nums, start, mid-1);
//         node->right =  form(nums, mid+1, end);
//         return node;
//     }
    
//     TreeNode* sortedArrayToBST(vector<int>& nums) {        
//         return form(nums, 0, nums.size()-1);
//     }
// };
class Solution {
public:
    
    TreeNode* helper(vector<int>& nums, int start, int end)
    {
        if(start>end)
            return nullptr;
        
        int mid = (start+end)/2;
        TreeNode *temp = new TreeNode(nums[mid]);
        temp->left = helper(nums, start, mid-1);
        temp->right = helper(nums, mid+1, end);
        return temp;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        return helper(nums,0,nums.size()-1);
    }
};