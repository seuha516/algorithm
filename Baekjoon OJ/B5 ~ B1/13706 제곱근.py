import sys
sys.setrecursionlimit(100000)

def se(st,end,mok):
  mid=(st+end)//2
  if(mid*mid==mok):
    return mid
  elif(mid*mid>mok):
    return se(st,mid-1,mok)
  else:
    return se(mid+1,end,mok)

a=int(input())
print(se(1,2**10000,a))