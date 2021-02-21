n=int(input())
m=int(input())

dap=-1
now=m

no=0

for i in range (n):
  a,b=map(int,input().split())

  now+=a-b
  dap=max(dap,now)
  if(now<0):no=1


if(no):
  print(0)
else:
  print(dap)
