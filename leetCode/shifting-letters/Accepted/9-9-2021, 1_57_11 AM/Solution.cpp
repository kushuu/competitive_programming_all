// https://leetcode.com/problems/shifting-letters

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int size = shifts.size();
        vector<int> check(size);
        
        for(int i = 0; i < size; i++) shifts[i] %= 26;
        
        check[size-1] = shifts[size-1];
        for(int i = size-2; i >= 0; i--) check[i] = (shifts[i]+check[i+1])% 26;
        
        for(int i = 0; i < size; i++) {
            // printf("%d ", s[i]);            
            s[i] = (char)((s[i] + check[i])%122);
            // printf("%d\n", s[i]);
            if(s[i] == 0) s[i] = 'z';
            if(s[i] < 97) s[i] += 96;
        }
        
        return s;
    }
};