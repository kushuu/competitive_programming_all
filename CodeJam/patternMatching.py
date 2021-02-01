def intersection(lst1, lst2):
    lst3 = [value for value in lst1 if value in lst2]
    return lst3

T = int(input())
for test in range(T):
    N = int(input())
    words = []

    for i in range(N):
        s = input()
        words.append(s)
    '''
    firstCharAsterick = False
    if words[0][0] == "*":
        firstCharAsterick = True
    else:
        alpha = words[0][1]
    '''
    i = 1
    while ( i < N ):
        char = 0
        if words[i][j] == "*":
            pass
        else:
            pass