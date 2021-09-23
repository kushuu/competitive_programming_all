// https://leetcode.com/problems/factorial-trailing-zeroes

from math import factorial
class Solution:
    def trailingZeroes(self, n: int) -> int:
        fact = str(factorial(n))[::-1]
        ans = 0
        while(fact[0] == '0'):
            ans += 1
            fact = fact[1:]
        return ans