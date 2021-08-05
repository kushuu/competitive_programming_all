// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        if(!size) return 0;
        
        set<char> check, checkmax(s.begin(), s.end());
        if(checkmax.size() == size) return size;
        
        int ans = 1;
        for(int i = 0, j = 0; i < size, j < size; ) {
            if(check.find(s[j]) == check.end()) {
                check.insert(s[j]);
                j++;
                ans = max(ans, j-i);
            }
            else {
                check.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};