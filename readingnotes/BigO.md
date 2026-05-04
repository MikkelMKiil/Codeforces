## 3.2 Common Complexities and Constraints

Complexity factors that come from some common algorithms and data structures are as
follows:

- Mathematical formulas that just calculate an answer: O(1)
- Unordered set/map: O(1) per operation
- Binary search: O(log n)
- Ordered set/map or priority queue: O(log n) per operation
- Prime factorization of an integer, or checking primality or compositeness of an integer:
	O(pn)
- Reading in n items of input: O(n)
- Iterating through an array or a list of n elements: O(n)
- Sorting: usually O(n log n) for default sorting algorithms (mergesort and quicksort
	used in std::sort())
- Iterating through all subsets of size k of the input elements: O(nk). For example,
	iterating through all triplets is O(n3).
- Iterating through all subsets: O(2n)
- Iterating through all permutations: O(n!)

Here are conservative upper bounds on the value of n for each time complexity. You can
probably get away with more than this, but this should allow you to quickly check whether
an algorithm is viable.

| n | Possible complexities |
| --- | --- |
| n <= 10 | O(n!), O(n7), O(n6) |
| n <= 20 | O(2n * n), O(n5) |
| n <= 80 | O(n4) |
| n <= 400 | O(n3) |
| n <= 7500 | O(n2) |
| n <= 7 * 10^4 | O(npn) |
| n <= 5 * 10^5 | O(n log n) |
| n <= 5 * 10^6 | O(n) |
| n <= 10^12 | O(pn log n), O(pn) |
| n <= 10^18 | O(log2 n), O(log n), O(1 |