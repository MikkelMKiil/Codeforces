CSES 1084, Appartments.
Signal: Two arrays, match elements with a delta k, maximize pairings
Idea: Sort both, two points(two arrays), walk forward conditionally, 3 way conditional, equal, less, larger
Trap: for loop intuitive, but wrong, delta k == (abs(a - b) <= k)

CSES 1090, Ferris wheel.
Signal: One array, one integer, match pairs in array, compare to integer, maximize pairs
Idea: Sort array, save x, walk from smallest and largest individually, match smallest with largest, ie. 1 + 9, if equal or less than 10, increment pair, walk both.
Trap: Edge case, off by ones, dont use while i < n && j < n, too easy to get off by one!

CSES 1091, Concert Tickets.
Signal: find best match ≤ budget, remove after use, repeated queries
Idea: multiset keeps sorted, upper_bound then step back gives largest ≤ x, erase by iterator
Trap: whatever got you — printing it instead of *it, reading input twice, ms.erase(ms.find(it)) vs ms.erase(it)

DIV4 1062 C
Signal: operation requires some condition between elements, asks for optimal result
Idea: check if the operation is possible at all before simulating it. If any pair has different parity, everything is reachable.
Trap: tried to simulate the sorting process instead of asking "can I sort at all?"

Signal: "split array into 3 contiguous parts, sum1==sum3, maximize" → prefix sums + two pointers from both ends, converge based on which side is smaller.
Idea: Build prefix. Left region sum = prefix[l]. Right region sum = prefix[n] - prefix[r]. If left < right grow left (l++), if left > right grow right (r--), if equal record and grow either side. Stop when l > r.
Trap: Empty middle is allowed (l == r is valid). Comment-vs-code convention drift bites every time. Print belongs after the loop, not inside.