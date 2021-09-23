// https://leetcode.com/problems/add-strings

class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        return str(int(num1, 10) + int(num2, 10))