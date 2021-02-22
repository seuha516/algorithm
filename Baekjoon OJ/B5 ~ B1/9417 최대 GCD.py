def gcd(a, b):
    while (b):
        w = a % b
        a = b
        b = w
    return a


t = int(input())

for i in range(t):

    a = []
    a = list(map(int, input().split()))

    dap = 0
    for j in range(len(a)):
        for k in range(j + 1, len(a)):
            x = gcd(a[j], a[k])
            if (dap < x):
                dap = x

    print(dap)
