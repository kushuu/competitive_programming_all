// https://leetcode.com/problems/pascals-triangle

class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        from math import factorial
        ans = []
        for i in range(numRows):
            temp = []
            for j in range(i+1):
                temp.append(factorial(i)//(factorial(j)*factorial(i-j)))
                
            ans.append(temp)
        return ans  