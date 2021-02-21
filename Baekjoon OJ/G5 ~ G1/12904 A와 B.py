a=input()
b=input()

while(1):
  if(len(b)==len(a)):
    break
  if(b[-1]=='A'):
    b=b[0:len(b)-1]
  else:
    b=b[0:len(b)-1]
    b=b[::-1]


if(b==a):
  print(1)
else:
  print(0)