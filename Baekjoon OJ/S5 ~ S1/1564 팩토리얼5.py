n=int(input())

t=1
for i in range (1,n+1):
  t*=i
  while(t%10==0):
    t//=10
  t%=10000000000000
  #print(i,t)

a=str(t%100000)
print(a.zfill(5))