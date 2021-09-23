// https://leetcode.com/problems/valid-palindrome

class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        string = ""
        for i in s:
            if i.isalpha() or i.isnumeric():
                string += i
        return string == string[::-1]