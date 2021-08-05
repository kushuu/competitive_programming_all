// https://leetcode.com/problems/subsets-ii

class Solution:
    from itertools import combinations        
    
    def subsetsWithDup(self, arr: List[int]) -> List[List[int]]:
        ans = []
        for i in range(len(arr)+1):
            temp = combinations(arr, i)
            for ele in temp:
                if ele not in ans:
                    ans.append(ele)
        return ans