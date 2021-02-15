x=int(input())+2
p=0
d=0
for i in range(3000,-1,-1):
  f=x//(2**i)
  g=(f+1)//2
  if(g>=1):
    g-=1
  if(f>=4):
    g+=1
  p,g=g,g-p
  d+=(i+2)//2*g
print(d)