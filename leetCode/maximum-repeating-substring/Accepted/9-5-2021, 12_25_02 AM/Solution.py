// https://leetcode.com/problems/maximum-repeating-substring

class Solution:
    def maxRepeating(self, sequence: str, word: str) -> int:
        if word not in sequence:
            return 0
        
        ans = 1
        while True:
            # print(ans)
            if word*ans in sequence:
                ans += 1
                continue
            else:
                break
        
        return ans-1