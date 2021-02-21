def gcd(a,b):
  while(b):
    w=a%b
    a=b
    b=w
  return a

t1=1
t2=1

n=int(input())
nn=list(map(int,input().split()))
m=int(input())
mm=list(map(int,input().split()))
for i in range (n):
  t1*=nn[i]
for i in range (m):
  t2*=mm[i]


x=gcd(t1,t2)

x=str(x)

if(len(x)>9):
  print(x[-9:-1]+x[-1])
else:
  print(x)

