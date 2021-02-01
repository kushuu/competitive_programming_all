s = input()
ans = -1
print(s[:len(s)//2], s[len(s)//2:])
for i in range(1, len(s)+1):
    print(i, len(s) - i)
    print(s[:i])
    if s[:i]*(len(s)//i) == s:
        ans = len(s)//i
        break
print(ans)