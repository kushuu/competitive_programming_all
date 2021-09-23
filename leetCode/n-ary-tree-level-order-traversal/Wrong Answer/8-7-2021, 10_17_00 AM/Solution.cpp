// https://leetcode.com/problems/n-ary-tree-level-order-traversal

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
    vector<vector<int>> levelOrder(Node* root) {
        if(root == nullptr) return {};
        vector<vector<int>> ans;
        vector<int> oneD_ans, sizes;
        
        int num_in_next = root->children.size();
        ans.push_back({root->val});
        queue<Node*> check; // lmao all the best.
        check.push(root);
        while(!check.empty()) {
            for(auto i : check.front()->children) {
                check.push(i);
            }
            oneD_ans.push_back(check.front()->val);
            if(check.front()->children.size()) sizes.push_back(check.front()->children.size());
            check.pop();
        }
        
        // for(auto i : oneD_ans) cout << i << " " ; cout << endl;
        // for(auto i : sizes) cout << i << " " ;
        
        oneD_ans.erase(oneD_ans.begin());
        for(auto x : sizes) {
            vector<int> temp;
            while(x--){
                temp.push_back(oneD_ans.front());
                oneD_ans.erase(oneD_ans.begin());
            }
            ans.push_back(temp);
        }

        return ans;
    }
};