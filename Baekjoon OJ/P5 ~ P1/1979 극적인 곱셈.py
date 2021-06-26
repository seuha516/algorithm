n, k = map(int, input().split())

if(n>k): print(0)
elif(n==1): print(k)
else:
  t=9
  while(1):
    if((t*k)%(10*n-1)==0):
      print(t*k//(10*n-1))
      break
    t=t*10+9