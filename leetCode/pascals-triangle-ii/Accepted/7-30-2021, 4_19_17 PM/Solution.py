// https://leetcode.com/problems/pascals-triangle-ii

class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        from math import factorial
        ans = []
        for i in range(rowIndex+1):
            ans.append(factorial(rowIndex)//(factorial(i)*factorial(rowIndex-i)))
            
        return ans