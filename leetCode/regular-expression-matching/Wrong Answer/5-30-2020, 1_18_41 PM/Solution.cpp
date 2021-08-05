// https://leetcode.com/problems/regular-expression-matching

class Solution {
public:
    bool isMatch(string s, string p) {
        if(p == ".*")   return true;
        else return false;
    }
};