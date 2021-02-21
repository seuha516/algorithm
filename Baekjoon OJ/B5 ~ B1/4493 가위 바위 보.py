tk=int(input())
for i in range (tk):
  n=int(input())
  a=0
  b=0
  for j in range (n):
    x,y=input().split()
    if(x==y):
      a+=0
    elif(x=='R' and y=='S'):
      a+=1
    elif(x=='S' and y=='P'):
      a+=1
    elif(x=='P' and y=='R'):
      a+=1
    else:
      b+=1
  if(a>b):
    print('Player 1')
  elif(a<b):
    print('Player 2')
  else:
    print('TIE')
