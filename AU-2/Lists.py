t=input()
l=[]
q=[]
for i in range(t):
  q=map(str,raw_input().split())
  if q[0]=="insert":
    l.insert(int(q[1]),int(q[2]))
  elif q[0]=="print":
    print l
  elif q[0]=="remove":
    l.remove(int(q[1]))
  elif q[0]=="append":
    l.append(int(q[1]))
  elif q[0]=="pop":
    l.pop()
  elif q[0]=="sort":
    l.sort()
  elif q[0]=="reverse":
    l.reverse()
