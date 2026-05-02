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