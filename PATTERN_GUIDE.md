# Codeforces Pattern Quick Reference

## When to Use Each Pattern

### **Prefix Sum**
- **When**: Need to answer multiple range sum queries
- **How**: Build once in O(n), query in O(1)
- **Example**: CSES/1646 (Static Sum Queries)
- **Key**: `prefix[i] = prefix[i-1] + a[i-1]`, query = `prefix[r] - prefix[l-1]`

### **Sliding Window (with prefix)**
- **When**: Find min/max sum of exactly k consecutive elements
- **How**: Build prefix, iterate through all k-length windows
- **Example**: B/363B (Fence) - minimum sum of k planks
- **Key**: Loop `i` from 1 to `n - k + 1`, compute window sum via prefix

### **Two Pointers - Sorted Arrays**
- **When**: Match elements from two sorted arrays within a constraint
- **How**: Sort both, advance pointers based on comparison
- **Example**: CSES/1084 (Apartments) - match applicants to apartments
- **Key**: If `abs(a[i] - b[j]) <= k` then match both, else move smaller pointer

### **Two Pointers - From Ends**
- **When**: Greedily pair elements to satisfy a sum constraint
- **How**: Sort, start from smallest and largest, meet in middle
- **Example**: CSES/1090 (Wheels) - pair children for gondola rides
- **Key**: `l++, r--` if valid pair; else `r--` if sum too large

### **Two Pointers with Prefix - Equal Segments**
- **When**: Find split point where prefix equals suffix
- **How**: Maintain two pointers, compare prefix[l] == total - prefix[r]
- **Example**: C/1006C (Three Part Array)
- **Key**: `l++` if left < right, `r--` if left > right

### **Multiset + Upper Bound**
- **When**: Need binary search + dynamic removals
- **How**: Use `multiset`, query with `upper_bound`, erase after use
- **Example**: CSES/1091 (Concert Tickets) - find largest ticket ≤ budget
- **Key**: `upper_bound(x)` returns first element > x, decrement to get ≤ x

### **Distinct Count**
- **When**: Count unique elements
- **How**: Sort, count adjacent differences
- **Example**: CSES/1621 (Distinct Numbers)
- **Key**: Start with 1, increment when `a[i] != a[i-1]`

### **Frequency Map**
- **When**: Count occurrences or group by value
- **How**: Use `map<int,int>` or frequency array
- **Example**: B/158B (Taxi) - count groups of 1,2,3,4 people
- **Key**: Iterate map with `for(auto& [k,v] : map)`

### **Modular Circular Distance**
- **When**: Work with circular/cyclic arrays (positions mod n)
- **How**: Use `(to - from + n) % n` formula
- **Example**: B/339B (Ring Road) - distance on circular path
- **Key**: Always add offset before modulo to handle negative values

---

## Problem Type → Pattern Mapping

| Problem Type | Pattern | Difficulty |
|---|---|---|
| "sum of elements from index a to b" | Prefix Sum | Easy |
| "minimum/maximum sum of k consecutive" | Sliding Window + Prefix | Easy-Med |
| "match two arrays within tolerance" | Two Pointers (sorted) | Easy-Med |
| "pair elements to satisfy constraint" | Two Pointers (ends) | Easy-Med |
| "find split where left = right" | Two Pointers + Prefix | Medium |
| "largest element ≤ x, then remove" | Multiset + Upper Bound | Medium |
| "count distinct values" | Sort + Adjacent Check | Easy |
| "group/count by value" | Frequency Map | Easy |
| "position on circular path" | Modular Arithmetic | Medium |

---

## Common Pitfalls

- **Prefix Sum**: Use `vector<long long>` for prefix to avoid overflow
- **Two Pointers**: Remember to `sort()` both arrays first
- **Multiset**: `upper_bound()` returns iterator to *first element > x*, not ≥ x
- **Sliding Window**: Loop bounds should be `1` to `n - k + 1` (inclusive)
- **Indices**: Be careful with 0-indexed arrays vs 1-indexed prefix sums

---

## Examples from Your Codebase

### Prefix Sum
```cpp
vector<long long> prefix(n + 1, 0);
for (int i = 1; i <= n; i++) prefix[i] = prefix[i-1] + a[i-1];
// Query: prefix[b] - prefix[a-1]
```

### Two Pointers (Apartments)
```cpp
sort(a.begin(), a.end());
sort(b.begin(), b.end());
int i=0, j=0, cnt=0;
while (i < n && j < m) {
    if (abs(a[i]-b[j]) <= k) { i++; j++; cnt++; }
    else if (a[i] < b[j]) i++;
    else j++;
}
```

### Two Pointers from Ends (Wheels)
```cpp
sort(v.begin(), v.end());
int l=0, r=n-1, cnt=0;
while (l < r) {
    if (v[l] + v[r] <= x) { l++; r--; cnt++; }
    else r--;
}
if (l == r) cnt++;
```

---

**Tournament tip**: Open these files during the contest and search by pattern name!
