from contextlib import nullcontext
import sys

input_context = nullcontext(sys.stdin)
with input_context as f:
    input_lines = f.readlines()

a = input_lines[0].strip().lower()
b = input_lines[1].strip().lower()
n = len(a)

total = 0

for i in range(n):
    if ord(a[i]) > ord(b[i]):
        total = 1
        break
    elif ord(a[i]) < ord(b[i]):
        total = -1
        break
    else: pass
print(total)