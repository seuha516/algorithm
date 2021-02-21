x = input()

if (len(x) <= 2):
    print(0)
    print(0)
else:
    a = 0
    b = 0
    for i in range(len(x) - 2):

        if (x[i] == 'J' and x[i + 1] == 'O' and x[i + 2] == 'I'):
            a += 1
        if (x[i] == 'I' and x[i + 1] == 'O' and x[i + 2] == 'I'):
            b += 1

    print(a)
    print(b)
