import itertools

(N, M) = map(int, input().split())
myList = []
for i in range(N):
    l = list(map(int, input().split()))
    n = l[0]
    myList.append(l[1:])

ans = 0
for l in itertools.product(*myList):
    s = sum([x**2 for x in l]) % M
    if s > ans:
        ans = s

print(ans)