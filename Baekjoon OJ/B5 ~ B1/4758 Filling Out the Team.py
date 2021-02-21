while (1):
    a, b, c = map(float, input().split())
    if (a * a + b * b + c * c == 0): break

    st = ''

    ok = 1
    if (a <= 4.5 and b >= 150 and c >= 200):
        st += 'Wide Receiver '
        ok = 0
    if (a <= 6.0 and b >= 300 and c >= 500):
        st += 'Lineman '
        ok = 0
    if (a <= 5.0 and b >= 200 and c >= 300):
        st += 'Quarterback '
        ok = 0

    if (ok == 1):
        st += 'No positions'

    print(st)
