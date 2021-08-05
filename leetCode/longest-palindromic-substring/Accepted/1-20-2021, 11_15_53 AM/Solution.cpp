// https://leetcode.com/problems/longest-palindromic-substring

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int bestLen = 1, len;
        string ans = "";
        // first check for the odd length palindromes.
        for(int mid = 0; mid < n; mid++) {
            for(int start = 0; mid-start >= 0 && start+mid < n; start++) {
                if(s[mid - start] != s[start+mid]) break;
                int len = 2*start+1;
                if(len > bestLen) {
                    bestLen = len;
                    ans = s.substr(mid-start, len);
                }
            }
        }

        // this one is for even length palindromes.
        for(int mid = 0; mid < n; mid++) {
            for(int start = 1; mid-start+1 >= 0 && start+mid < n; start++) {
                if(s[mid - start+1] != s[start+mid]) break;
                int len = 2*start;
                if(len > bestLen) {
                    bestLen = len;
                    ans = s.substr(mid-start+1, len);
                }
            }
        }
        if(ans != "")
            return ans;
        
        return s.substr(0, 1);
    }
};