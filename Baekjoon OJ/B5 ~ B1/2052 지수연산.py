def jari(n):
  x=0
  while (n>0) :
    n//=10
    x+=1
  return x

m=int(input())
t=5**m
tt=jari(t)


a='0.'
aa=m-tt
for i in range (aa):
  a+='0'

print(a+str(t))