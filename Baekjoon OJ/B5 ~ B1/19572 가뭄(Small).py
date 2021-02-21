a,b,c=map(int,input().split())
t=(a+b+c)/2
a=t-a
b=t-b
c=t-c

if(a<=0 or b<=0 or c<=0):
    print(-1)
else:
    print(1)
    print(c,b,a)