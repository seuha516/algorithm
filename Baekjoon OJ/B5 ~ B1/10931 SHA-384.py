import hashlib
x=hashlib.new('sha384')
x.update(input().encode())
print(x.hexdigest())
