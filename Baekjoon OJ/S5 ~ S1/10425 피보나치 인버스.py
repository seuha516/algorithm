a=[]
a.append(0)
a.append(1)
a.append(1)
for i in range (3,100001):
  a.append(a[i-1]+a[i-2])

a[1]=-1

#print(a[50000])

t=int(input())

for i in range (t):

  x=int(input())

  print(a.index(x));
