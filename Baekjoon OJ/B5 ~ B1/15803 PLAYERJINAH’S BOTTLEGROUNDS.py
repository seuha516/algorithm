a,b=map(int,input().split())
c,d=map(int,input().split())
e,f=map(int,input().split())
t=a*d+c*f+e*b-b*c-d*e-f*a

if (t==0):
  print('WHERE IS MY CHICKEN?')
else:
  print('WINNER WINNER CHICKEN DINNER!')