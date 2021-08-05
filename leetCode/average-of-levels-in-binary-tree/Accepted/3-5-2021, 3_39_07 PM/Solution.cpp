// https://leetcode.com/problems/average-of-levels-in-binary-tree

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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> check;
        check.push(root);
        while(!check.empty())
        {
            double sum=0;
            int temp=check.size();
            for(int i=0;i<temp;i++)
            {
                sum+=check.front()->val;
                if(check.front()->left)
                {
                    check.push(check.front()->left);
                }
                if(check.front()->right)
                {
                    check.push(check.front()->right);
                }
                check.pop();
            }
            ans.push_back(sum/temp);
        }
        return ans;
    }
};