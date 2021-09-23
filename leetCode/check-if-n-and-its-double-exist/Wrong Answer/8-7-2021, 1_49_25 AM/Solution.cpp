// https://leetcode.com/problems/check-if-n-and-its-double-exist

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int zcnt = 0;
        for(auto i : arr) if(!i) zcnt++;
        if(zcnt >= 2) return true;
        
        set<int> check(arr.begin(), arr.end());
        for(auto i : check) {
            if(check.find(i*2) != check.end()) return true;
        }
        return false;
    }
};