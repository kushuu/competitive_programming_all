'''
Author: kushuu
Date: Sat Aug 08 2020
File: palindrome reorder.py
'''

s = input()
if(len(s)%2 == 0):   #even length string
    keeper = [0]*26
    flag = True
    for i in range(len(s)):
        keeper[ord(s[i]) - ord('A')]+=1
    for i in keeper:
        if i%2 != 0:
            flag = False
            break
    if flag:
        ans = ""
        for i in range(26):
            if keeper[i] != 0:
                ans += chr(i + 65)*(keeper[i]//2)
        ans = ans + ans[::-1]
        print(ans)

    else:
        print("NO SOLUTION")

else:
    keeper = [0]*26
    flag = True
    for i in range(len(s)):
        keeper[ord(s[i]) - ord('A')] += 1
    oddCnt = 0
    for i in keeper:
        if i%2 != 0:
            oddCnt += 1
    if oddCnt > 1:
        flag = False
        
    if flag == False:
        print("NO SOLUTION")
    else:
        oddChar = ''
        for i in range(26):
            if keeper[i]%2 != 0:
                oddChar = chr(i + 65)
                break
        
        ans = ""
        for i in range(26):
            if keeper[i] != 0:
                ans += chr(i + 65)*(keeper[i]//2)
        ans = ans + oddChar + ans[::-1]
        print(ans)
