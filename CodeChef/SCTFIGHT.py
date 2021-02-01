'''
Author: kushuu
Date: Thu Jul 30 2020
File: SCTFIGHT.py
'''
from collections import Counter

t = int(input())
for _ in range(t):
    ans = 1
    n = int(input())
    sides = list(map(int, input().split()))
    cnt = Counter(sides)
    ans = cnt.most_common(1)
    print(ans[0][1])