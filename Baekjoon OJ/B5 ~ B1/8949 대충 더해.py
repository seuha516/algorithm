x, y = input().split()

xlen = len(x)
ylen = len(y)

ttt = 0
if (xlen > ylen):
    ttt = xlen
else:
    ttt = ylen

x = x[::-1]
y = y[::-1]

for i in range(abs(ylen - xlen)):
    if (xlen < ylen):
        x += '0'
    else:
        y += '0'

# print(x,y)

a = []

for i in range(ttt):
    a.append(int(x[i]) + int(y[i]))

dap = ''
for i in range(len(a)):
    dap += str(a[len(a) - i - 1])

print(dap)

