// https://leetcode.com/problems/decoded-string-at-index

class Solution:
    def decodeAtIndex(self, S: str, K: int) -> str:
        ans = ""
        for i in S:
            if i.isalpha():
                ans += i
            else:
                # print(int(i))
                ans *= int(i)
        
        # print(ans)
        return ans[K-1]