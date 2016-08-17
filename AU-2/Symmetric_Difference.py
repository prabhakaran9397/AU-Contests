m=input()
ml=map(int,raw_input().split())
n=input()
nl=map(int,raw_input().split())
ml=list(set(ml)^set(nl))
ml.sort()
for i in range(len(ml)):
  print ml[i]
