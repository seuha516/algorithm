t=int(input())

for i in range (t):
  n=int(input())
  a=0
  b=0
  c=0
  d=0
  a+=n//25
  n%=25
  b+=n//10
  n%=10
  c+=n//5
  n%=5
  d+=n
  print(a,b,c,d)

