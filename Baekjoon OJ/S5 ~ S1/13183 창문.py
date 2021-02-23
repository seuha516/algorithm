h,w=map(int,input().split())

def gcd(a,b):
  if(a<b):
    a,b=b,a
  while(b):
    w=a%b
    a=b
    b=w
  return a


g=h*(h+1)*w*(w+1)//4
t1=(h*(h+1)*(h+1)//2)-(h*(h+1)*(2*h+1)//6)
t2=(w*(w+1)*(w+1)//2)-(w*(w+1)*(2*w+1)//6)
t=t1*t2*9

ggcd=gcd(t,g)
t//=ggcd
g//=ggcd

print(t%1000000007)
