n=int(input())
t=""
for i in range(n+n-1):
  x=input()
  if(x=='/'): t+="//"
  else: t+=x
print(eval(t))