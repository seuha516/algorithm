while (1):
    aa = []
    aa = list(map(int, input().split()))

    if (aa[0] == 0):
        break

    a = aa[0]
    b = aa[1]
    c = aa[2]

    t1 = 0
    t2 = 0
    for i in range(len(str(b))):
        t1 += int((str(b))[i]) * (a ** (len(str(b)) - i - 1))
    for i in range(len(str(c))):
        t2 += int((str(c))[i]) * (a ** (len(str(c)) - i - 1))

    t3 = t1 % t2

    dap = ''
    while (t3):
        dap += str(t3 % a)
        t3 //= a

    if (dap == ''):
        print(0)
    else:
        print(dap[::-1])