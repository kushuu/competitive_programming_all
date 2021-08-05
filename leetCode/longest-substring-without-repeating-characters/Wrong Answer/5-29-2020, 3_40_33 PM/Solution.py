// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        ans = 0
        for i in range(len(s)):
            for j in range(i+1, len(s)):
                if(len(s[i:j]) == len(set(s[i:j]))):
                    ans = max(ans, len(s[i:j]))
        
        return ans