// https://leetcode.com/problems/validate-binary-search-tree

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
//     void dfs(TreeNode* node, vector<int>& check) {
//         if(node == NULL) {
//             return ;
//         }
//         dfs(node->left, check);
        
//         check.push_back(node->val);
        
//         dfs(node->right, check);
//     }
//     bool isValidBST(TreeNode* root) {
//         vector<int> check;
//         dfs(root, check);
//         int size = check.size();
//         for(int i = 1; i < size; i++) {
//             if(check[i] <= check[i-1]) return false;
//         }
//         return true;
//     }
   
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> nodes;
        TreeNode* temp = root;
        double inorder = - numeric_limits<double>::infinity();
      
        while(temp || !nodes.empty()) {
            while(temp) {
                nodes.push(temp);
                temp = temp ->left;
            }
            
            temp = nodes.top();
            nodes.pop();
            if(temp->val <= inorder)
                return false;
            
            inorder = temp->val;
            
            temp = temp->right;
        }
        
        return true;
    }
};