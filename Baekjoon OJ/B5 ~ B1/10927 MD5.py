import hashlib
x=hashlib.new('MD5')
x.update(input().encode())
print(x.hexdigest())
