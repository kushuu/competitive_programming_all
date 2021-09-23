// https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ss = s.size(), ts = t.size();
        if(ts < ss) return false;
        
        int si = 0, ti = 0;
        while(ti < ts) {
            if(t[ti] == s[si]) si++;
            ti++;
        }
        return si == ss;
    }
};