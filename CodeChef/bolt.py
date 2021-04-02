test = int(input())
for _ in range(test):
    k1, k2, k3, v = list(map(float , input().split()))
    time = 100
    time /= k1
    time /= k2
    time /= k3
    time /= v
    if round(time, 2)  < 9.58:
        print("YES")
    else:
        print("NO")