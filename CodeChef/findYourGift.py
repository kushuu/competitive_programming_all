T = int(input())
for i in range(T):
    x = y = 0
    N = int(input())
    S = input()
    S.upper()
    for ch in range(N):
        if ch == 0:
            if S[ch] == 'L':
                x-=1
            elif S[ch] == 'R':
                x+=1
            elif S[ch] == 'U':
                y+=1
            else:
                y-=1
        else:
            if S[ch] == 'L' and (S[ch-1] != 'L' and S[ch-1] != 'R'):
                x -= 1
                #print(x)
            elif S[ch] == 'R' and (S[ch-1] != 'L' and S[ch-1] != 'R'):
                x += 1
                #print(x)
            elif S[ch] == 'U' and (S[ch-1] != 'U' and S[ch-1] != 'D'):
                y += 1
                #print(y)
            elif S[ch] == 'D' and (S[ch-1] != 'U' and S[ch-1] != 'D'):
                y -= 1
                #print(y)

        
    print(x,y)
