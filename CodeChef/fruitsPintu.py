import numpy as np
T = int(input())  # the number of test cases.

while T>0 :
    N, M = list(map(int, input().split()))   # for N baskets and M prices each.
    P = F = []
    fruitBasket = np.zeros(M)
    F = list(map(int , input().split()))
    P = list(map(int , input().split()))

    for i in range(N):
        if (i+1) in F:
            fruitBasket[F[i]-1] += P[i]


    minCost = fruitBasket[0]
    for i in fruitBasket:
        if i < minCost and i in F:
            minCost = i

    print(int(minCost))
    
    T-=1
