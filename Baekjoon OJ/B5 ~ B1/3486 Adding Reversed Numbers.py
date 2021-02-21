tk=int(input())
for i in range (tk):
  a,b=input().split()
  dap=int(a[::-1])+int(b[::-1])
  print(int(str(dap)[::-1]))