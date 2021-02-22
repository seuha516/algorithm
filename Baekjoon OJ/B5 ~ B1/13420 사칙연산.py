t=int(input())

for i in range(t):
  x=input()

  idx=x.find('=')
  xx=x[0:idx-1]
  xxx=x[idx+1:len(x)]

  dd=eval(xx)

  #print(dd,xxx)

  if(int(dd)==int(xxx)):
    print('correct')
  else:
    print('wrong answer')