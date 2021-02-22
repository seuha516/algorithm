a=input()

dap=1

if(a[0]=='d'):
  dap*=10
else:
  dap*=26

for i in range (1,len(a)):
  if(a[i]=='d'):
    if(a[i-1]=='d'):
      dap*=9
    else:
      dap*=10
  else:
    if(a[i-1]=='d'):
      dap*=26
    else:
      dap*=25

print(dap)