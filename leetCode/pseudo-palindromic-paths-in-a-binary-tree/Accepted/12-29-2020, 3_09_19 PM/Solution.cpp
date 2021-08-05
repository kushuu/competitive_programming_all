// https://leetcode.com/problems/pseudo-palindromic-paths-in-a-binary-tree

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
    private:
    unordered_map<int, int> freq;
    vector<vector<int>> check;
public:
    void rootToLeaf(TreeNode* node, vector<int> temp) {
        if(node == NULL) return;
        
        temp.push_back(node->val);
        if(node->left == NULL && node->right == NULL) {
            check.push_back(temp);
        }
        
        rootToLeaf(node->left, temp);
        rootToLeaf(node->right, temp);
    }
    
    int fin(vector<vector<int>> check) {
        int ans = 0;
        for(auto i : check) {
            for(auto j : i) {
                freq[j]++;
            }
            
            // for(auto ss : freq) cout << ss.first << " " << ss.second << " " ; cout << endl;
            
            if((int)i.size()&1) {
                bool odd = false, pal = true;
                for(auto x : freq) {
                    if(x.second&1) {
                        if(!odd) odd = true;
                        else {pal = false; break;}
                    }
                }
                if(pal) ans++;
            }
            else {
                bool pal = true;
                for(auto x : freq) {
                    if(x.second&1) {
                        pal = false;
                        break;
                    }
                }
                if(pal) ans++;
            }
            freq.clear();
        }
        return ans;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        if(root == NULL) return 0;
        vector<int> vec;
        rootToLeaf(root, vec);
        // for(auto i : check) {
        //     for(auto j : i) cout << j << " " ;
        //     cout << endl;
        // }
        int ans = fin(check);
        return ans;
    }
};