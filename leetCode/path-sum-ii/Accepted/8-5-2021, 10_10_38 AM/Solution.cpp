// https://leetcode.com/problems/path-sum-ii

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
    vector<vector<int>> ans;
    
    void dfs(TreeNode* node, int target, vector<int>& check) {
        if(node == nullptr) return;
        target -= node->val;
        check.push_back(node->val);
        if(node->left == nullptr and node->right == nullptr) {
            if(target == 0) {
                ans.push_back(check);
            }
        }
        dfs(node->left, target, check);
        dfs(node->right, target, check);

        // for(auto i : check) cout << i << " " ; cout << endl;
        check.pop_back();
        // for(auto i : check) cout << i << " " ; cout << endl << endl;
    }
        
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> check;
        dfs(root, targetSum, check);
        return ans;
    }
};