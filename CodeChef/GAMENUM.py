def retExor( A,B ):
    if len(binA) > len(binB):
        biggerLen = len(binA)
    else:
        biggerLen = len(B)
    exor = []
    for i in range(biggerLen):
        exor.append(int(binA[i]) ^ int(binB[i]))
    binExor = ""
    for i in exor:
        binExor += str(i)
    return binExor

T=int(input())
for i in range(T):
    A , B = list(map(int , input().split()))
    binA = bin(A)[2:]
    binB = bin(B)[2:]

    if len(binA) > len(binB):
        biggerLen = len(binA)
        reqLen = biggerLen - len(binB)
        binB = "0"*reqLen + binB
    else:
        biggerLen = len(binB)
        reqLen = biggerLen - len(binA)
        binA = "0"*reqLen + binA
    
    # print(list(binA) , list(binB) , sep="\n")
    binA = list(binA)
    binB = list(binB)

    cnt = 0
    maxBin = -1
    for i in range(biggerLen):
        ex = int(retExor(binA,binB) , 2)
        if ex > maxBin:
            maxBin = ex
            cnt=i
        
        binB = (binB[len(binB) - 1:len(binB)] + binB[0:len(binB) - 1])
        #print(binA , binB , ex , sep="\n")
        #print()
    
    print(cnt-1 , maxBin)
