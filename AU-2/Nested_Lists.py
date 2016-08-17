n=input()
a=[]
b=[]
c=[]
d=[]
for i in range (n):
  a.append(raw_input())
  x=input()
  b.append(x)
  c.append(x)
b.sort()
s=b[0]
m=b[n-1]
i=n-1
while i>-1:
  if b[i]<m and b[i]!=s:
    m=b[i]
  i-=1
for i in range(n):
  if m==c[i]:
    d.append(a[i])
d.sort()
for i in d:
  print i
