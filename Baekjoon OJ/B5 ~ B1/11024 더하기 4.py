A=int(input())

for i in range(A):
  y=0
  t=list(map(int,input().split()))
  #print(len(t))
  for j in range(len(t)):
    y+=t[j]
  print(y)
