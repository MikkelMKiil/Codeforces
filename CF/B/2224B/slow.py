import sys

def custom_sort(lst):
    if not lst:
        return []

    counts = {}
    for n in lst:
        counts[n] = counts.get(n, 0) + 1

    result = []
    current = min(lst)

    while counts.get(current, 0) > 0:
        result.append(current)
        counts[current] -= 1
        current += 1

    rest = []
    for num, count in counts.items():
        rest.extend([num] * count)

    result.extend(sorted(rest, reverse=True))
    return result


num_of_lists = int(sys.stdin.readline().strip())

for _ in range(num_of_lists):
    sys.stdin.readline().strip()
    input_list = list(map(int, sys.stdin.readline().strip().split()))

    MEX = 0
    MAX = 0
    total = 0

    if 0 not in input_list:
        input_list.sort(reverse=True)
    else:
        input_list = custom_sort(input_list)

    prefix = set()

    for num in input_list:
        prefix.add(num)
        while MEX in prefix:
            MEX += 1
        MAX = max(MAX, num)
        total += (MAX + MEX)

    print(total)