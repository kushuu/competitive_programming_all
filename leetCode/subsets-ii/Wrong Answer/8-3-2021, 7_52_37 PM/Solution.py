// https://leetcode.com/problems/subsets-ii

class Solution:
    from itertools import combinations        
    
    def subsetsWithDup(self, arr: List[int]) -> List[List[int]]:
        ans = [[]]  # final ans.
        for i in range(len(arr) + 1):
            for j in range(i):
                temp = arr[j: i]
                ans.append(sorted(temp))    
        # print(len(ans))
        # print(ans)
        to_ret = []
        for ele in ans:
            if ele not in to_ret:
                to_ret.append(ele)
        return to_ret