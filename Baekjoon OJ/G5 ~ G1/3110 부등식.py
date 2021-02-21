def gcd(a,b):
  if(a<b):a,b=b,a
  while(b):
    w=a%b
    a=b
    b=w
  return a

def lcm(a,b):
  return a*b/gcd(a,b)

import math
b,c,d=map(int,input().split())
a1,a2=map(int,input().split())
e1,e2=map(int,input().split())
dap=0
st1=math.ceil(a1/a2*c+0.000000001)
ed1=math.floor(e1/e2*c-0.000000001)
for i in range(st1,ed1+1):
  st2=math.ceil(a1/a2*b+0.000000001)
  ed2=math.floor(i/c*b-0.000000001)
  st3=math.ceil(i/c*d+0.000000001)
  ed3=math.floor(e1/e2*d-0.000000001)

  #print(i,st2,'~',ed2,st3,'~',ed3)

  dap+=(ed2-st2+1)*(ed3-st3+1)
print(dap)