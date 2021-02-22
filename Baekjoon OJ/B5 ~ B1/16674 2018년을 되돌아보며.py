t = input()

a = 0
b = 0
c = 0
d = 0
e = 0
for i in range(len(t)):
    if (t[i] == '2'):
        a += 1
    elif (t[i] == '0'):
        b += 1
    elif (t[i] == '1'):
        c += 1
    elif (t[i] == '8'):
        d += 1
    else:
        e += 1

if (e != 0):
    print(0)
elif (a == 0 or b == 0 or c == 0 or d == 0):
    print(1)
elif (a == b and b == c and c == d):
    print(8)
else:
    print(2)