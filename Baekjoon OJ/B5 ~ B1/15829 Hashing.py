A=int(input())
B=input()

D=0
for i in range(A):
  C=ord(B[i])-96
  for j in range(i):
    C*=31
  D+=C;

print(D%1234567891)
