x=int(input())
dap=1
for i in range (1,x+1):
    dap*=(i%10)
    dap%=10
print(dap)
