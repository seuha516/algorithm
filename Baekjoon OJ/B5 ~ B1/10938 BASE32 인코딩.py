import base64
s=input()
b=s.encode("UTF-8")
e=base64.b32encode(b)
k=str(e)
ss=k[2:len(k)-1]
print(ss)