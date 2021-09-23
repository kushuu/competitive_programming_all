// https://leetcode.com/problems/binary-tree-paths

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
    vector<vector<int>> check;
    
    void dfs(TreeNode *node, vector<int>& temp) {
        if(node == nullptr) return;
        temp.push_back(node->val);
        if(node->left == nullptr and node->right == nullptr) {
            check.push_back(temp);
        }
        
        dfs(node->left, temp);
        dfs(node->right, temp);
        temp.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<int> temp;
        dfs(root, temp);
        // for(auto i : check) {
        //     for(auto j : i) cout << j << " " ; cout << endl;
        // }
        vector<string> ans;
        for(auto i : check) {
            string wowow = to_string(i[0]);
            for(int j = 1; j < i.size(); j++) wowow += "->" + to_string(i[j]);
            ans.push_back(wowow);
        }
        return ans;
    }
};