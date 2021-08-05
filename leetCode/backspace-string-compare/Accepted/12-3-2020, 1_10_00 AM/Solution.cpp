// https://leetcode.com/problems/backspace-string-compare

class Solution {
public:
    string check(string str) {
        string s = "";
        for(auto i : str) {
            if(i == '#') {
                if(!(s.empty())) s.pop_back();
            }
            else s += i;
        }
        return s;
    }
    bool backspaceCompare(string S, string T) {
        return check(S) == check(T);
    }
};