import hashlib
x=hashlib.new('ripemd160')
x.update(input().encode())
print(x.hexdigest())
