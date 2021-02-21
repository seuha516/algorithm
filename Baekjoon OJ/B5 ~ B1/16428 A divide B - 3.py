A,B=map(int,input().split())

if (A>0 and B>0):
  print(A//B)
  print(A%B)
if (A<0 and B>0):
  print(A//B)
  print(A%B)
if (A>0 and B<0):
  b=B*(-1)
  dap=-1*(A//b)
  print(dap)
  print(A-(B*dap))
if (A<0 and B<0):
  b=B*(-1)
  print((A//b)*(-1))
  print(A%b)