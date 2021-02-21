import sys

# A=int(sys.stdin.readline())
A,B=map(int,sys.stdin.readline().split())
if(A>B):
  w=A
  A=B
  B=w

cha=B-A+1

print(cha*(B+A)//2)