even1 = odd1 = 0
T = int(input())
while T>0:
    N, Q = list(map(int , input().split()))
    A = list(map(int , input().split()))
    while Q>0:
        P = int(input())
        for i in A:
            pLoop = i^P
            print(pLoop , end=' ')
            
            count1 = 0

            while pLoop>0:
                if pLoop%2 != 0:
                    count1+=1
                    pLoop//=2

            if count1 % 2 != 0:
                even1+=1
            else:
                odd1+=1
        print(even1,odd1,end=' ')
        
        Q-=1

    T-=1
