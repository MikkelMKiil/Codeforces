#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

// =============================================================
// BITMASK — unique presence over a small fixed set
// =============================================================
// Input:   string of lowercase letters
// Output:  count of unique characters
// When:    set size <= 32 (alphabet = 26, fits in int)
//
//   int seen = 0;
//   for (char ch : s)
//       seen |= (1 << (ch - 'a'));
//   int unique_count = __builtin_popcount(seen);


// =============================================================
// __builtin_popcount — count set bits in an integer
// =============================================================
// Input:   int n
// Output:  number of 1-bits
// When:    after building a bitmask, or any bit-counting need
//
//   __builtin_popcount(0b00001011) == 3
//   __builtin_popcountll(n)        // use this for long long


// =============================================================
// TERNARY OPERATOR — inline if/else that produces a value
// =============================================================
// Input:   bool condition, two values of the same type
// Output:  one of the two values
// When:    single-condition branching, especially inside cout
//
//   cout << (x % 2 == 0 ? "even" : "odd");


// =============================================================
// RANGE-BASED FOR — iterate over every element cleanly
// =============================================================
// Input:   any iterable (string, vector, array)
// Output:  each element in order
// When:    you need every element and don't need the index
//
//   for (char ch : s) { ... }
//   for (int x : v) { ... }
//   for (auto& x : v) { ... }   // use & to avoid copying large types


// =============================================================
// UNORDERED_MAP — frequency / value lookup in O(1) average
// =============================================================
// Input:   stream of keys
// Output:  map[key] = count (or any associated value)
// When:    "how many times does X appear?"
//
//   unordered_map<char, int> freq;
//   for (char ch : s) freq[ch]++;
//   freq['a']   // returns count, or 0 if never seen


// =============================================================
// UNORDERED_SET — unique items, O(1) average lookup
// =============================================================
// Input:   stream of items
// Output:  set of unique items, .size() = unique count
// When:    set size is large or not just letters (use over bitmask)
//
//   unordered_set<int> seen;
//   seen.insert(x);
//   if (seen.count(x)) { ... }   // check presence


// =============================================================
// SORT — sort a vector or array ascending
// =============================================================
// Input:   vector<int> v
// Output:  v sorted in-place, O(n log n)
// When:    ordering matters, finding min/max after filtering
//
//   sort(v.begin(), v.end());              // ascending
//   sort(v.begin(), v.end(), greater<int>()); // descending


// =============================================================
// MIN / MAX — smallest or largest of two (or more) values
// =============================================================
// Input:   two comparable values
// Output:  the smaller / larger one
// When:    clamping, comparing scores, running extremes
//
//   int lo = min(a, b);
//   int hi = max(a, b);
//   int lo = min({a, b, c});   // initializer list form — C++11


// =============================================================
// TO_STRING / STOI — convert between int and string
// =============================================================
// Input:   int or numeric string
// Output:  the other type
// When:    digit manipulation, building output strings
//
//   string s = to_string(42);   // "42"
//   int n    = stoi("42");      //  42


// =============================================================
// STRING INDEXING & LENGTH
// =============================================================
// Input:   string s
// Output:  individual chars, size
// When:    always
//
//   s.length()    // or s.size() — same thing
//   s[i]          // char at index i
//   s.substr(i, len)  // substring starting at i, length len


// =============================================================
// ABS — absolute value
// =============================================================
// Input:   int or float
// Output:  non-negative value
// When:    distance, difference problems
//
//   #include <cmath>   // needed for float version
//   abs(-5)  == 5
//   abs(5)   == 5
