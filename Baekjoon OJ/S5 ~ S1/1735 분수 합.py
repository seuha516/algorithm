def gcd(a,b):
  while(b):
    w=a%b
    a=b
    b=w
  return a

t1,t2=map(int,input().split())
t3,t4=map(int,input().split())

bb=t2*t4
aa=t2*t3+t1*t4

ttt=gcd(aa,bb)
aa//=ttt
bb//=ttt

print(aa,bb)