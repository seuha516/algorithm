p, k = map(int, input().split())

temp = -1
for i in range(2, k):
    if (p % i == 0):
        temp = i
        break

if (temp == -1):
    print('GOOD')
else:
    print('BAD ' + str(temp))
