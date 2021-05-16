T = int(input())
for _ in range(T):
    N = int(input())
    print((1<<(N-1))%(10**9+7))