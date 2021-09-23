// https://leetcode.com/problems/reshape-the-matrix

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size(), m = mat[0].size();
        if(r*c != n*m) return mat;
        
        vector<int> temp;
        vector<vector<int>> ans;
        
        for(auto i : mat) for(auto j : i) temp.push_back(j);
        
        int itr = 0;
        for(int i = 0; i < r; i++) {
            vector<int> check;
            for(int j = 0; j < c; j++) check.push_back(temp[itr++]);
            ans.push_back(check);
        }
        return ans;
    }
};