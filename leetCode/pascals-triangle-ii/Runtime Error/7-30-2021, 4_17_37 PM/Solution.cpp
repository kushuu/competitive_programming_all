// https://leetcode.com/problems/pascals-triangle-ii

class Solution {
public:
    int fact(int n) {
        int ans = 1;
        for(int i = 1; i <= n; i++) ans *= i;
        return ans;
    }
    
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        for(int i = 0; i <= rowIndex; i++) {
            ans.push_back(fact(rowIndex)/(fact(i)*fact(rowIndex-i)));
        }
        return ans;
    }
};