// https://leetcode.com/problems/reverse-bits

class Solution:
    def reverseBits(self, n: int) -> int:
        # print(n)
        binary = bin(n)[2:]
        binary = '0'*min(32, 32 - len(binary)) + binary
        # print(binary)
        binary = binary[::-1]
        # print(binary)
        return int(binary, 2)