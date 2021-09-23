// https://leetcode.com/problems/search-a-2d-matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto i : matrix) for(auto j : i) if(j == target) return true;
        return false;
    }
};