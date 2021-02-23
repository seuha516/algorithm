while (1):

    a, b = map(int, input().split())

    if (a == 0 and b == 0):
        break

    if (a == b):
        print(1)
        continue

    if (b > (a // 2)):
        b = a - b

    t1 = 1
    for i in range(b):
        t1 *= (a - i)
    for i in range(b):
        t1 //= (b - i)

    print(t1)