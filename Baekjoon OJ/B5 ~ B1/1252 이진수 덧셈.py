a,b=input().split()

t1=0
t2=0

for i in range (len(a)):
  t1*=2
  t1+=(int(a[i]))
for i in range (len(b)):
  t2*=2
  t2+=(int(b[i]))


t3=t1+t2

dap=''
while(t3):
  dap+=str(t3%2)
  t3//=2
if(dap==''):
  dap='0'

print(dap[::-1])
