def ReturnTheString(L, idx1, idx2 = -1):
    ans = ""
    for i in range(len(L)):
        if i != idx1 and i != idx2:
            ans += str(L[i])
    if ans == "":
        return 0
    else:
        return ans

def fun(L):
    L.sort(reverse=True)
    if sum(L)%3 == 0:
        ans = ""
        for i in L:
            ans += str(i)
        return ans

    else:
        if len(L) == 1:
            return 0
        to_be_subtracted = sum(L)%3
        #print(to_be_subtracted, sum(L))
        if to_be_subtracted == 1:
            rem = [-1]*2
            for i in range(len(L)):
                if L[i]%3 == 1:
                    return ReturnTheString(L, i)
                    
        
                if L[i]%3 == 2:
                    if rem[0] == -1:
                        rem[0] = i
                    elif rem[1] == -1:
                        rem[1] = i
            
            if rem[0] != -1 and rem[1] != -1:
                return ReturnTheString(L, rem[0], rem[1])
                
        else:
            rem1 = [-1]*2
            for i in range(len(L)):
                if L[i]%3 == 2:
                    return ReturnTheString(L, i)
                                        
                if L[i]%3 == 1:
                    if rem1[0] == -1:
                        rem1[0] = i
                    elif rem1 [1] == -1:
                        rem1[1] = i

            if rem1[0] != -1 and rem1[1] != -1:
                return ReturnTheString(L, rem1[0], rem1[1])

L = list(map(int, input().split()))
#print(L) #for debugging.
print(fun(L))