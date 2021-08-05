// https://leetcode.com/problems/diagonal-traverse

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        if(matrix.empty()) return {};
        int n = matrix.size(), m = matrix[0].size();
        
        map<int, vector<int>> check;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                check[i+j].push_back(matrix[i][j]);
            }
        }
        
        // for(auto i : check) {
        //     cout << i.first << ": " ;
        //     for(auto j : i.second) cout << j << " " ;
        //     cout << endl;
        // }
        
        vector<int> ans;
        for(auto i : check) {
            if(!(i.first&1)) {
                reverse(i.second.begin(), i.second.end());
                for(auto x : i.second) ans.push_back(x);
            }
            else {
                for(auto x : i.second) ans.push_back(x);
            }
        }
        
        
        // reverse(ans.begin(), ans.end());
        return ans;
        
    }
};