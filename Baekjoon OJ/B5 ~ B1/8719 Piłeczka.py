import sys
tk=int(sys.stdin.readline())
for i in range (tk):
  a,b=map(int,sys.stdin.readline().split())
  dap=0
  while(a<b):
    a*=2
    dap+=1
  print(dap)