T = int(input())
for test in range(T):
    S = input()
    newStr = ""
    openBracket = 0
    for i in range(len(S)):
        ele = int(S[i])
        if ele > openBracket:
            for j in range(ele - openBracket):
                newStr+="("
            newStr+=S[i]
        
        elif ele < openBracket:
            for j in range(openBracket - ele):
                newStr += ")"
            newStr += S[i]

        else:
            newStr += S[i]
        openBracket = ele
    for i in range(openBracket):
        newStr+=")" 

    print("Case #" , test+1 , ": " , newStr , sep="")