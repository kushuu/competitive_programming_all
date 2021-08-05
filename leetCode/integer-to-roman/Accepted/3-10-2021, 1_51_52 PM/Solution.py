// https://leetcode.com/problems/integer-to-roman

class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        check = {
            1: "I",
            5: "V",
            10: "X",
            50: "L",
            100: "C",
            500: "D",
            1000: "M",
        }
        ans = ""
        pos = 1
        while(num > 0):
            digit = num % 10
            
            if(digit == 4 or digit == 9):
                ans = check[pos] + check[digit * pos + pos] + ans
            elif(digit == 1 or digit == 5):
                ans = check[digit * pos] + ans
            elif(digit < 5):
                ans = check[pos] * digit + ans
            else:
                ans = check[5 * pos] + check[1 * pos] * (digit - 5) + ans
                
            num //= 10
            pos *= 10
        
        return ans