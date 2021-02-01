from itertools import permutations
s = input()
perms = permutations(s)
finalLst = sorted(list(set(perms)))
print(len(finalLst))
for i in finalLst:
    print("".join(i))