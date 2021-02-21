a,b,c=map(int,input().split())

n=a+b-c
n//=3
aa=n+n
bb=n

while(aa>a or bb>b):
  aa-=2
  bb-=1

print(bb)
