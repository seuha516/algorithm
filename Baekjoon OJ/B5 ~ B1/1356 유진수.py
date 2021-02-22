n = int(input())

a = []

while (n):
    a.append(n % 10)
    n //= 10

gob = 1

for i in range(len(a)):
    gob *= a[i]

t = 0

for i in range(1, len(a)):
    aa = 1
    bb = 1
    for j in range(len(a)):
        if (j < i):
            aa *= a[j]
        else:
            bb *= a[j]

    # print(aa,bb)
    if (aa == bb):
        t = 1

if (t == 1):
    print('YES')
else:
    print('NO')