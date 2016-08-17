t=input()
a=[[]for i in range(t)]
for i in range(t):
  a[i]=map(str,raw_input().split())
q=raw_input()
for i in range(t):
  if q==a[i][0]:
    h=(float(a[i][1])+float(a[i][2])+float(a[i][3]))/3.0
print ("%.2f"%h)
