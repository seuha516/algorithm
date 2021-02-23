def johab(a,b):
  t=1.0
  for i in range (b):
    t*=(a-i)
    t/=(b-i)
  return t

n,m,k=map(int,input().split())

ncm=johab(n,m)

boonja=0
for i in range (k,m+1):
  bj1=johab(m,i)*johab(n-m,m-i)
  #print('bj1=',bj1,'m,k,n-m,m-k',m,i,n-m,m-i)
  boonja+=bj1

print(boonja/ncm)