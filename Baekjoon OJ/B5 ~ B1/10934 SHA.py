import hashlib
x=hashlib.new('sha')
x.update(input().encode())
print(x.hexdigest())
