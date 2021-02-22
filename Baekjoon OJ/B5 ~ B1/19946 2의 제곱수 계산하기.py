a = int(input())
t = 64
while (a % 2 == 0):
    t -= 1
    a //= 2

print(t)