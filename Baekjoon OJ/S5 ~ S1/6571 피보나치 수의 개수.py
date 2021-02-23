a=[]
a.append(0)
a.append(1)
a.append(1)
for i in range (3,3001):
  a.append(a[i-1]+a[i-2])

while(1):
  x,y=map(int,input().split())
  if(x==0 and y==0):
    break
  x-=1
  t1=0
  t2=0
  for i in range (2,3000):
    if(a[i]>x):
      t1=i
      break
  for i in range (2,3000):
    if(a[i]>y):
      t2=i
      break

  if(x>y):
    t2=t1
  print(t2-t1)

