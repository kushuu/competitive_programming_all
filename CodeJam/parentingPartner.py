T = int(input())
for test in range(T):
    N = int(input())
    tasks = []
    ans = ""
    for i in range(N):
        S, E = list(map(int , input().split()))
        tasks.append([S, E, ""])
    Js = Je = 0
    ref = tasks[:][:]
    for i in range(N):
        for j in range(0, N-i-1):
            if tasks[j][0] > tasks[j+1][0]:
                tasks[j], tasks[j+1] = tasks[j+1], tasks[j]

    Cs = tasks[0][0]     # assuming the tasks are starting wih Cameron.
    Ce = tasks[0][1]
    tasks[0][2] = "C"
    
    for i in range(1, N):
        if tasks[i][0] >= Ce:
            Cs = tasks[i][0]
            Ce = tasks[i][1]
            tasks[i][2]="C"
        elif tasks[i][0] >= Je:
            Js = tasks[i][0]
            Je = tasks[i][1]
            tasks[i][2]="J"
        else:
            ans = "IMPOSSIBLE"
            flag = 1

    if "IMPOSSIBLE" in ans:
        print("Case #", test+1, ": ", "IMPOSSIBLE", sep="")
    else:
        for i in range(N):
            ans+=ref[i][2]   
        print("Case #" , test+1 , ": " , ans , sep="") 