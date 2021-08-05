// https://leetcode.com/problems/search-a-2d-matrix-ii

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        ios::sync_with_stdio(0);
        int n = matrix.size();
        if(n == 0) return false;
        int m = matrix[0].size();
        // if(n == 1) {
        //     int i = 0, j = m-1, mid;
        //     // mid = i + (j - i) / 2;
        //     while(i <= j) {
        //         mid = i + (j - i) / 2; 
        //         // cout << mid << " " ;
        //         if(matrix[0][mid] == target) return true;
        //         if(matrix[0][mid] < target) i = mid+1;
        //         else j = mid-1;
        //     }
        //     return false;
        // }
            
        int i = 0, j = m-1;
        while(i < n and j >= 0) {
            if(target == matrix[i][j]) return true;
            if(matrix[i][j] < target) i++;
            else j--;
        }
        
        return false;
    }
};