t=int(input())
for i in range (t):
  a,b=map(int,input().split())
  x=''

  while(a):
    if(a%b<10):
      x+=str(a%b)
    else:
      x+=str(a%b-9)
      x+=str(a%b-9)
    a//=b

  if(x==''):
    x='0'


 # print(x)
  xx=x[::-1]
  if(x==xx):
    print(1)
  else:
    print(0)