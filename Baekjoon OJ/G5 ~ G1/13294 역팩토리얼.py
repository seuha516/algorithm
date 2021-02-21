import math

x=int(input())
x=math.log(x)

t=1
while(1):
   x-=math.log(t)
   if(abs(x)<0.0000001): break
   t+=1


print(t)