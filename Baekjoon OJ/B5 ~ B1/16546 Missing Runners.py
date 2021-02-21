n=int(input())
a=[]
a=list(map(int,input().split()))
hap=0
for i in range (n-1):
  hap+=a[i]

print(int(n*(n+1)/2 - hap))