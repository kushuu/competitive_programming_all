'''
Author: kushuu
Date: Sat Aug 08 2020
File: SKMP.py
'''

def check(s, p):
    for i in P:
        if i in S:
            S.replace(i, "")
        else:
            return False
    return True

t = int(input())
for _ in range(t):
    S = input()
    P = input()
    if check(P, S):
        S = list(S)
        S.append(P)
        for i in P:
            S.remove(i)
        print("".join(sorted(S)))