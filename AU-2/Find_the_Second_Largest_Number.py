N = input()
A = list(set(map(int, raw_input().split())))
A.sort()
print A[-2]
