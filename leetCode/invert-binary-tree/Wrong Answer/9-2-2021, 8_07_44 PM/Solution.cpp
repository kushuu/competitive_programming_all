// https://leetcode.com/problems/invert-binary-tree

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
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return nullptr;
        vector<vector<int>> check;
        queue<TreeNode*> q;
        
        q.push(root);
        while(!q.empty())
        {
          int siz=q.size();
            vector<int> temp;
            while(siz--)
            {
                TreeNode *tmp=q.front();
                q.pop();
                temp.push_back(tmp->val);
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
            }
            check.push_back(temp);
        }
        for(auto &i : check) reverse(i.begin(), i.end());
        queue<int> endgame;
        for(auto i : check) for(auto j : i) endgame.push(j);
        
        q.push(root);
        root->val = endgame.front();
        endgame.pop();
        while(!q.empty()) {
            TreeNode *pp = q.front();
            q.pop();
            if(pp->left){
                q.push(pp->left);
                pp->left->val = endgame.front();
            }
            endgame.pop();
            if(pp->right){
                q.push(pp->right);
                pp->right->val = endgame.front();
            }
            endgame.pop();
        }
        
        return root;
    }
};