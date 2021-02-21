a=int(input())
for i in range (a):
  x,y=map(int,input().split())
  print('Scenario #'+str(i+1)+':')
  print((x+y)*(abs(x-y)+1)//2)
  print('')