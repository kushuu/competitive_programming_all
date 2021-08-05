// https://leetcode.com/problems/create-sorted-array-through-instructions

from sortedcontainers import SortedList

class Solution:
    def createSortedArray(self, instructions: List[int]) -> int:
        multiset = SortedList()
        ans = 0
        for num in instructions:
            ans += min(multiset.bisect_left(num), len(multiset) - multiset.bisect_right(num))
            ans %= (10**9 + 7)
            multiset.add(num)

        return ans