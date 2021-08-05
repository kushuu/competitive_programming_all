// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix

class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        n = len(mat)
        m = len(mat[0])
        check = {}
        for i in range(n):
            check[i] = mat[i].count(1)
        # orders = check.values()
        check = sorted(check.items(), key = lambda kv:(kv[1], kv[0]))
        ans = []
        for i in range(k):
            ans.append(check[i][0])
        return ans