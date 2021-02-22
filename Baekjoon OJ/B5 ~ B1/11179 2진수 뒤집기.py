n=int(input())

x=''

while(n):
  x+=str(n%2)
  n//=2

t=0
for i in range (len(x)):
  t*=2
  t+=int(x[i])
print(t)