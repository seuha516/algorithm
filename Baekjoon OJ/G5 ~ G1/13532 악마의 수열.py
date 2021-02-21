n=int(input())
t=1
b1=1
b2=0
x=0
for i in range(2,n+1):
  t*=5
  x=b1+b2+b2
  b2=b1
  b1=x

st=str(x*t)

dap=0
while(1):
  if(st[dap]!='6'):
    break
  dap+=1

print(dap)