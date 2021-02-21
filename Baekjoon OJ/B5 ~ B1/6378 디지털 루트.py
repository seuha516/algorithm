def go(a):
    dap = 0
    for i in range(len(a)):
        dap += int(a[i])
    return dap


while (1):
    x = input()
    if (x == '0'):
        break

    while (len(x) >= 2):
        x = str(go(x))

    print(x)