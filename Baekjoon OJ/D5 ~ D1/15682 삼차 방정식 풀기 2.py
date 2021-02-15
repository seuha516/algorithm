import math

sib_jegop = []
sib_jegop.append(1)
for i in range(11):
    sib_jegop.append(sib_jegop[i] * 10)

def fx(a, b, c, d, x):
    return a * x * x * x + b * x * x + c * x + d
def change(n):
    npoint = n.find('.')
    if (npoint == -1):
        return int(n) * sib_jegop[11]
    else:
        n = n[:npoint] + n[npoint + 1:]
        return int(n) * sib_jegop[11 - len(n) + npoint]
def find(a, b, c, d, st, end):
    if (st > end):
        return 9999999
    mid = (st + end) // 2
    res = fx(a, b, c, d, mid)
    if (res == 0):
        return mid
    elif (res < 0):
        return find(a, b, c, d, mid + 1, end)
    else:
        return find(a, b, c, d, st, mid - 1)
def find2(a, b, c, d, st, end):
    if (st > end):
        return 9999999
    mid = (st + end) // 2
    res = fx(a, b, c, d, mid)
    if (res == 0):
        return mid
    elif (res > 0):
        return find(a, b, c, d, mid + 1, end)
    else:
        return find(a, b, c, d, st, mid - 1)


TC = int(input())
for i in range(TC):
    a, b, c, d = input().split()
    a = change(a)
    b = change(b)
    c = change(c)
    d = change(d)
    if (a < 0):
        a *= (-1)
        b *= (-1)
        c *= (-1)
        d *= (-1)
    dap = []

    bb3ac = math.sqrt(b * b - 3 * a * c)
    if (bb3ac > 0):
        boon1 = (-1) * b - bb3ac
        boon2 = (-1) * b + bb3ac
        g1 = math.floor(boon1 / (3 * a))
        g2 = math.ceil(boon2 / (3 * a))
        x = find(a, b, c, d, -1000000, g1)
        if (x != 9999999):
            dap.append(x)
        else:
            x = find(a, b, c, d, g1 + 1, g2 - 1)
            if (x != 9999999):
                dap.append(x)
            else:
                x = find(a, b, c, d, g2, 1000000)
                if (x != 9999999):
                    dap.append(x)
    else:
        dap.append(find(a, b, c, d, -1000000, 1000000))

    aa = a
    bb = b + a * dap[0]
    cc = c + bb * dap[0]
    bb4ac = bb * bb - 4 * aa * cc

    if (bb4ac < 0):
        print(dap[0])
    elif (bb4ac == 0):
        dap.append(bb * (-1) / (2 * aa))
        dap.sort()
        if (dap[1] - dap[0] < 0.000000001):
            print(dap[0])
        else:
            print(dap[0], dap[1])
    else:
        boonja1 = bb * (-1) + math.sqrt(bb4ac)
        boonja2 = bb * (-1) - math.sqrt(bb4ac)
        dap.append(boonja1 / (2 * aa))
        dap.append(boonja2 / (2 * aa))
        dap.sort()
        cha1 = dap[1] - dap[0]
        cha2 = dap[2] - dap[1]
        if (cha1 < 0.000000001 and cha2 < 0.000000001):
            print(dap[0])
        elif (cha1 < 0.000000001):
            print(dap[0], dap[2])
        elif (cha2 < 0.000000001):
            print(dap[1], dap[2])
        else:
            print(dap[0], dap[1], dap[2])

