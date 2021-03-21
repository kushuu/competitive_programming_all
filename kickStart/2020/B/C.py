T = int(input())
for test in range(T):
    string = input()
    openBr = []
    finalString = ""

    for i in range(len(string)):
        if string[i] == "(":
            openBr.append(i)
            # print(openBr)
        if string[i] == ")":
            print("this gon be removed:", string[openBr[-1] - 1: i+1])
            print("this gon be added:", string[openBr[-1]+1: i]*int(string[openBr[-1]-1]))
            toBeReplaced = string[openBr[-1] - 1: i+1]
            toReplace = string[openBr[-1]+1: i]*int(string[openBr[-1]-1])
            string.replace(toBeReplaced, toReplace)
            openBr.pop()
    string.replace( "(" , "" ) 
    print("ans:",string)
