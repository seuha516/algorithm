x = int(input())

for i in range(x):

    a = input()
    x = len(a) // 2

    if (int(a[x]) == int(a[x - 1])):
        print('Do-it')
    else:
        print('Do-it-Not')


