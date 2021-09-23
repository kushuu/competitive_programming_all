// https://leetcode.com/problems/spiral-matrix

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        if(!n) return {};
        int m = matrix[0].size();
        if(n == 1) return matrix[0];
        
        int left = 0, up = 0, right = m-1, bottom = n-1;
        
        
        while(ans.size() != n*m) {
            for(auto i : ans) cout << i << " "; cout << endl;
            for(int i = left; i <= right; i++) ans.push_back(matrix[up][i]);
            for(int i = up+1; i <= bottom; i++) ans.push_back(matrix[i][right]);
            if(up != bottom) for(int i = right-1; i >= left; i--) ans.push_back(matrix[bottom][i]);
            if(left != right) for(int i = bottom-1; i >= up+1; i--) ans.push_back(matrix[i][left]);
            
            left++, right--, up++, bottom--;
        }
        return ans;
    }
};