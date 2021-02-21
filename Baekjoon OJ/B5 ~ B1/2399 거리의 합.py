n=int(input())
aa=list(map(int,input().split()))
dap=0
for i in range (n):
    for j in range (i+1,n):
        dap+=abs(aa[i]-aa[j])

print(dap*2)