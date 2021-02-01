'''
Author: kushuu
Date: Sun Aug 23 2020
File: sparse arrays.py
'''

n = int(input())
strings = []
queries = []
for _ in range(n):
    string = input()
    strings.append(string)

m = int(input())
for _ in range(m):
    tmp = input()
    queries.append(tmp)

ans = []
for i in queries:
    ans.append(strings.count(i))

for i in ans:
    print(i)