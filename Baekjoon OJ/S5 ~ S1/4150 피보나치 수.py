n=int(input())

a=[]
a.append(0)
a.append(1)
a.append(1)
for i in range (3,30001):
  a.append(a[i-1]+a[i-2])


print(a[n])
