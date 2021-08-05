// https://leetcode.com/problems/search-a-2d-matrix-ii

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        if(n == 0) return false;
        int m = matrix[0].size();
        if(n == 1) {
            int i = 0, j = m-1, mid;
            // mid = i + (j - i) / 2;
            while(i <= j) {
                mid = i + (j - i) / 2; 
                // cout << mid << " " ;
                if(matrix[0][mid] == target) return true;
                if(matrix[0][mid] < target) i = mid+1;
                else j = mid-1;
            }
            return false;
        }
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(matrix[i][j] == target) return true;
        
        return false;
    }
};