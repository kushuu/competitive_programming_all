T = int(input())
for _ in range(T):
    s = input()
    firsthalf = list(s[:len(s)//2])
    #print(firsthalf)

    if len(s)%2 == 0:
        flag = 0
        for i in s[len(s)//2:]:
            if i in firsthalf:
                firsthalf.remove(i)
            else:
                flag = 1
                break

        #print(firsthalf)
        
        if flag == 0:
            print("YES")
            continue
        else:
            print("NO")
            continue
                
        if len(firsthalf) != 0:
            print("NO")
        else:
            print("YES")
    
    else:
        s = s.replace(s[len(s)//2], "")
        flag = 0
        for i in s[len(s)//2:]:
            if i in firsthalf:
                firsthalf.remove(i)
            else:
                flag = 1
                break

        if flag == 0:
            print("YES")
            continue
        else:
            print("NO")
            continue

        if len(firsthalf) != 0:
            print("NO")
        else:
            print("YES")
