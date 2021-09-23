// https://leetcode.com/problems/plus-one

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num = int("".join([str(i) for i in digits]))
        num += 1
        return [str(i) for i in str(num)]