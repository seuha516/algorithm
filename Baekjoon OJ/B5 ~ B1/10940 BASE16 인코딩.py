import base64
s=input()
b=s.encode("UTF-8")
e=base64.b16encode(b)
k=str(e)
ss=k[2:len(k)-1]
print(ss)