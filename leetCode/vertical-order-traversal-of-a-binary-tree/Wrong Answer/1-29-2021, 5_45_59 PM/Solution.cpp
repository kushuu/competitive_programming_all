// https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree

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
    map<int, vector<int>> check;
public:
    /*
    void dfs(TreeNode *node, int vh) {
        if(node == nullptr) return;
        
        check[vh].push_back(node->val);
        dfs(node->left, vh-1);
        dfs(node->right, vh+1);
    }
    */
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        
        if(root == nullptr) return {};
        // dfs(root, 0);
        
        queue<pair<TreeNode*, int>> temp;   // queue of pairs of nodes and vh.
        temp.push({root, 0});
        
        while(!temp.empty()) {
            pair<TreeNode*, int> tt = temp.front();
            temp.pop();
            TreeNode* front = tt.first;
            int vh = tt.second;
            check[vh].push_back(front->val);
            
            if(front->left != nullptr) temp.push({front->left, vh-1});
            if(front->right != nullptr) temp.push({front->right, vh+1});
            // cout << tt->val << " " ;
        }
        for(auto i : check) {
            ans.push_back(i.second);
        }
        return ans;
    }
};