n=int(input())

t=''
while(n):
  t+=str(n%2)
  n//=2

dap=0
for i in range (len(t)):
  dap+=int(t[i])*(3**i)

print(dap)