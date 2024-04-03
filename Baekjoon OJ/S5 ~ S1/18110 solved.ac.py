import sys
import math
from functools import reduce

input = sys.stdin.readline
print = sys.stdout.write

n = int(input().rstrip())
score_arr = []

if n == 0:
  print('0')
  exit()

for i in range(n):
  score = int(input().rstrip())
  score_arr.append(score)

score_arr.sort()

exclude_len = math.floor(n * 0.15 + 0.5)
include_len = n - (2 * exclude_len)

score_arr = score_arr[exclude_len : n - exclude_len]

acc = reduce(lambda acc, curr: acc + curr, score_arr, 0)
print(str(math.floor(acc / include_len + 0.5)) + '\n')