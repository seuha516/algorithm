while(1):
  a,b,c,d=map(int,input().split())
  if(a*a+b*b+c*c+d*d==0):
    break
  else:
    print(c-b,d-a)