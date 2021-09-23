// https://leetcode.com/problems/shifting-letters

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int size = shifts.size();
        // vector<int> check(size);
        
        // for(int i = 0; i < size; i++) shifts[i] %= 26;
        
        for(int i = size-2; i >= 0; i--) shifts[i] = (shifts[i]+shifts[i+1])% 26;
        
        for(int i = 0; i < s.size(); i ++) {
            s[i] = (s[i] - 'a' + shifts[i]) % 26 +'a';
        }
        
        return s;
    }
};