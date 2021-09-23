// https://leetcode.com/problems/pascals-triangle

class Solution {
public:
    int fact(long int n) {
        if(n == 0 or n == 1) return 1;
        return n*fact(n-1);
    }
    
    vector<int> get_one(int n) {
        vector<int> check;
        check.push_back(1);
        for(int i = 1; i <= n; i++) {
            check.push_back(fact(n)/(fact(i)*fact(n-i)));
        }
        return check;
    }
    
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        
        for(int i = 0; i < n; i++) {
            ans.push_back(get_one(i));
        }
        
        return ans;
    }
};