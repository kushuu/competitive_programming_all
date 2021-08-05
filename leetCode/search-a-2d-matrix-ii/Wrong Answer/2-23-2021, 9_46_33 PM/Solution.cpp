// https://leetcode.com/problems/search-a-2d-matrix-ii

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        if(n == 0) return false;
        if(n == 1) {
            int i = 0, j = n-1, mid;
            mid = (matrix[0][i]+matrix[0][j])/2;
            while(i <= j) {
                mid = i + (j - i) / 2; 
                if(matrix[0][mid] == target) return true;
                if(matrix[0][mid] < target) i = mid+1;
                else j = mid-1;
            }
            return false;
        }
        
        int m = matrix[0].size();
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(matrix[i][j] == target) return true;
        
        return false;
    }
};