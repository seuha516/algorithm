fib = []
fib.append(0)
fib.append(1)
for i in range(2, 16000):
    fib.append((fib[i - 1] + fib[i - 2]) % 1000000000000000000)
fibb = []
fibb.append(fib[1499] % 1000000000000000000)
fibb.append(fib[1500] % 1000000000000000000)
for i in range(1, 18):
    t1 = fibb[(i - 1) * 2]
    t2 = fibb[(i - 1) * 2 + 1]
    for j in range(9):
        t3 = t1 + t2
        temp1 = t1 * fibb[(i - 1) * 2] + t2 * fibb[(i - 1) * 2 + 1]
        temp2 = t2 * fibb[(i - 1) * 2] + (t1 + t2) * fibb[(i - 1) * 2 + 1]
        t1 = temp1 % 1000000000000000000
        t2 = temp2 % 1000000000000000000
    fibb.append(t1)
    fibb.append(t2)

n = input()
length = len(n)
n = int(n)
ok = 0
dap = []

def go(lev, f1, f2, idx):
    if (lev == length + 1):
        return
    tt1 = f1
    tt2 = f2
    for i in range(10):
        if (tt1 % (10 ** lev) == n % (10 ** lev)):
            if (lev == length):
                dap.append(idx)
            go(lev + 1, tt1, tt2, idx)

        ttemp1 = tt1 * fibb[(lev - 3) * 2] + tt2 * fibb[(lev - 3) * 2 + 1]
        ttemp2 = tt2 * fibb[(lev - 3) * 2] + (tt1 + tt2) * fibb[(lev - 3) * 2 + 1]
        tt1 = ttemp1 % 1000000000000000000
        tt2 = ttemp2 % 1000000000000000000
        idx += (10 ** lev) + 5 * (10 ** (lev - 1))

if (length == 1):
    for i in range(16000):
        if (fib[i] % 10 == n):
            print(i)
            ok = 1
            break
elif (length == 2):
    for i in range(7, 16000):
        if (fib[i] % 100 == n):
            print(i)
            ok = 1
            break
elif (length == 3):
    for i in range(12, 16000):
        if (fib[i] % 1000 == n):
            print(i)
            ok = 1
            break
else:
    for i in range(15000):
        if (fib[i] < 10 ** (length - 1)):
            continue
        if (fib[i] % 10000 == n % 10000):
            # print('fib[',i,']=',fib[i],'일치하는 길이',3)
            go(4, fib[i], fib[i + 1], i)
            if (len(dap) != 0):
                ok = 1

if (len(dap) != 0):
    print(dap[0])

if (ok == 0):
    print('NIE')