a,b=map(int,input().split())
t=1
t2=1
for i in range (b):
  t*=(a-i)
  t2*=(b-i)

print((int)(t//t2))
