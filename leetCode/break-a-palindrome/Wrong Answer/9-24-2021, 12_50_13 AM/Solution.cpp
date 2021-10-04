// https://leetcode.com/problems/break-a-palindrome

class Solution {
public:
    string breakPalindrome(string s) {
        int size = s.size();
        if(size == 1) return s;
        bool found = false;
        for(int i = 0; i < size; i++) {
            if(s[i] != 'a') { s[i] = 'a'; found = true; break; }
        }
        if(!found) {
            if(s.back() == 'a') s.back() = 'b';
            else s.back() = 'a';
        } 
        return s;
    }
};