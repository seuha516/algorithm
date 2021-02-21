t=int(input())

for i in range (t):
  d=0
  x=input()
  n=int(input())
  for i in range (n):
    d+=int(input())
  if(d%n==0):
    print('YES')
  else:
    print('NO')
  d=0