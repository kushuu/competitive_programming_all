T = int(input())
for i in range(T):
    N = int(input())
    A = list(map(int , input().split()))
    
    cnt = 0    # cnt holds the number of ones in A.
    for i in A:
        if i == 1:
            cnt+=1
    # print(cnt)
    
    if cnt == 1:
        print("YES")
        break
    else:
        for j in range(N):
            flag = False
            counter = 0
            if A[j] == 1:
                k = j+1
                while (A[k] != 1 and k < N):
                    counter+=1
                    k+=1
            if counter >= 5:
                flag = True
        
        if flag:
            print("YES")
        else:
            print("NO")
