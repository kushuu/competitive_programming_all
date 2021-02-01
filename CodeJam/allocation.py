T = int(input())
for i in range(T):
    houseCount = 0
    N, B = list(map(int, input().split()))
    A = list(map(int, input().split()))
    A.sort()
    #print(A)
    for j in A:
        if j <= B:
            houseCount+=1
            B-=j
            # print(B)

    print("Case " , "#" , i+1 , ": " , houseCount , sep = '')