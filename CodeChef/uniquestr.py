s = input()
if 'c' in s or 'k' in s:
    print(0)
else:
    ans = 1
    ggCnt = s.count('gg')
    ffCnt = s.count('ff')
    #print(ggCnt, ffCnt)
    print(2**(ggCnt + ffCnt))