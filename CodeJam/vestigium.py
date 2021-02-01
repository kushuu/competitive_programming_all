T = int(input())
for test in range(T):
    N=int(input())
    M = []
    for i in range(N):
        a = list(map(int , input().split()))
        M.append(a)

    trace=0
    rCount = cCount = 0
    for i in range(N):
        for j in range(N):
            if i == j: 
                trace+=M[i][j]

    for i in range(N):
        # print(M[i], set(M[i]))
        if len(M[i]) != len(set(M[i])):
            rCount += 1

    for i in range(N):
        for j in range(i+1, N):
            M[i][j], M[j][i] = M[j][i], M[i][j]

    for i in range(N):
        # print(M[i], set(M[i]))
        if len(M[i]) != len(set(M[i])):
            cCount += 1

    print("Case #" , test+1 , ": " , trace ," ", rCount , " " , cCount , sep="") 
