def sum1(start_idx, end_idx, l):
    ans = 0
    for i in range(start_idx, end_idx+1):
        ans += l[i]
    return ans

def ret2():
    return -1, -1

l = list(map(int, input().split()))
t = int(input())
flag = False
#################
for i in range(len(l)):
    for j in range(len(l)):
        if sum1(i, j, l) == t:
            print(i, j)
            flag = True
            break

if(flag == False):
    print(-1, -1)


print(ret2())

################