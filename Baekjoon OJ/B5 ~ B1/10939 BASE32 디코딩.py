import base64
s=input()
s=s.encode('UTF-8')
b=s.decode("UTF-8")
e=base64.b32decode(b)
k=str(e)
ss=k[2:len(k)-1]
print(ss)