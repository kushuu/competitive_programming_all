// https://leetcode.com/problems/n-ary-tree-preorder-traversal

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> ans;
    void dfs(Node* node) {
        if(node == nullptr) return;
        ans.push_back(node->val);
        for(auto i : node->children) dfs(i);
    }
    
    vector<int> preorder(Node* root) {
        if(root == nullptr) return {};
        
        dfs(root);
        return ans;
    }
};