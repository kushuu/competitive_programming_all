// https://leetcode.com/problems/break-a-palindrome

class Solution {
public:
    string breakPalindrome(string s) {
        int size = s.size();
        if(size == 1) return "";
        bool found = false;
        for(int i = 0; i < size/2; i++) {
            if(s[i] != 'a') { s[i] = 'a'; found = true; break; }
        }
        if(!found) {
            if(s.back() == 'a') s.back() = 'b';
            else s.back() = 'a';
        } 
        return s;
    }
};