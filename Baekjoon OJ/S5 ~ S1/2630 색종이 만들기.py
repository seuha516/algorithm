import sys

input = sys.stdin.readline

len = int(input().rstrip())
sum_arr = []
blue = 0
white = 0

def acc_paper(n, xs, ys):
  acc = sum_arr[xs + n - 1][ys + n - 1]
  top_acc = sum_arr[xs - 1][ys + n - 1] if xs > 0 else 0
  left_acc = sum_arr[xs + n - 1][ys - 1] if ys > 0 else 0
  top_left_acc = sum_arr[xs - 1][ys - 1] if xs*ys > 0 else 0

  return acc - top_acc - left_acc + top_left_acc

def calc_paper(n, xs, ys):
  acc = acc_paper(n, xs, ys)

  if acc == n*n:
    global blue
    blue += 1
  elif acc == 0:
    global white
    white += 1
  else:
    calc_paper(n//2, xs, ys)
    calc_paper(n//2, xs + n//2, ys)
    calc_paper(n//2, xs, ys + n//2)
    calc_paper(n//2, xs + n//2, ys + n//2)


for i in range(len):
  sum_arr.append([])
  row = list(map(int, input().rstrip().split()))

  for j in range(len):
    top_acc = sum_arr[i - 1][j] if i > 0 else 0
    left_acc = sum_arr[i][j - 1] if j > 0 else 0
    top_left_acc = sum_arr[i - 1][j - 1] if i*j>0 else 0
    sum_arr[i].append(row[j] + top_acc + left_acc - top_left_acc)

calc_paper(len, 0, 0)

print(str(white) + '\n' + str(blue))