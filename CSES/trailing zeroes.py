'''
Author: kushuu
Date: Sat Aug 08 2020
File: trailing zeroes.py
'''

num = int(input())
i = 5
ans = 0
while i < 10**9 and i <= num:
    #print(i)
    ans += (num//i)
    i *= 5

print(ans)