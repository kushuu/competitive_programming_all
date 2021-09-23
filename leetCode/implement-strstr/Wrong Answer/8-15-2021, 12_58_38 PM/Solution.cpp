// https://leetcode.com/problems/implement-strstr

class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = -1;
        bool found = false;
        if(haystack == "") return ans;
        if(needle == "") return 0;
        if(haystack.size() < needle.size()) return ans;
        
        for(int i = 0; i <= haystack.size() - needle.size() and !found; i+=needle.size()) {
            if(haystack.substr(i, needle.size()) == needle) {
                ans = i;
                found = true;
                break;
            }
        }
        return ans;
    }
};