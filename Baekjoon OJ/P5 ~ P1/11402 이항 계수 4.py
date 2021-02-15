n,k,m=map(int,input().split())

arr=[]
for i in range (2003):
  arr.append([])
  for j in range (i+2):
    arr[i].append(0)
arr[0][0]=1
arr[1][0]=1
arr[1][1]=1

for i in range (2,2002):
  for j in range (i+1):
    if(j==0 or j==i):
      arr[i][j]=1
    else:
      arr[i][j]=arr[i-1][j-1]+arr[i-1][j]
      arr[i][j]%=m

j1=[]
j2=[]
while(n):
  j1.append(n%m)
  n//=m
while(k):
  j2.append(k%m)
  k//=m

DAP=1
for i in range (len(j2)):
  a=j1[i]
  b=j2[i]
  if(a<b):
    DAP*=0
    break
  else:
    DAP*=arr[a][b]
    DAP%=m
print(DAP%m)