a=[]
x=int(input())
a.append(0)
a.append(1)
a.append(1)
if(x==0):
  print('0')
elif(x<=2):
  print('1')
else:
  for i in range (3,x+1):
    a.append(a[i-1]+a[i-2])
  print(a[x])
