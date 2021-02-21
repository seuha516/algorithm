t=int(input())

for i in range(t):
  x=input()
  y=x[::-1]
  z=int(x)+int(y)
  zz=str(z)
  zzz=zz[::-1]
  if(zz==zzz):
    print('YES')
  else:
    print('NO')

