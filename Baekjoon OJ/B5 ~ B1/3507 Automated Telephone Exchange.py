x = int(input())
dap = 0
for i in range(x + 1):
    a = i
    b = x - i
    if (a < 100 and b < 100):
        dap += 1

print(dap)