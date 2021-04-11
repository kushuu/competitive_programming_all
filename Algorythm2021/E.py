t = int(input())
for _ in range(t):
    a, b = [int(x) for x in input().split()]
    print(str(a**b)[-1])