n = int(input()) #size of list
d = int(int(input())) # no of rotations
lst = [int(x) for x in input().split()]
print(lst[d:] + lst[:d])