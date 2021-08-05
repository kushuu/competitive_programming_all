// https://leetcode.com/problems/find-numbers-with-even-number-of-digits

class Solution(object):
    def findNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans = 0
        for ele in nums:
            if len(str(ele))%2 == 0: ans+=1
                
        return ans