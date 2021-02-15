s,p=map(int,input().split())
if(s==p):
  print(1)
else:
  ok=0
  for i in range (2,30):
    chleo=(s**i)/(i**i)
    if(p<=chleo):
      print(i)
      ok=1
      break
  if(ok==0):
    print(-1)