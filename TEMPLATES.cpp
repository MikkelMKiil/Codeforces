#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// TEMPLATE - QUICK COPY-PASTE PATTERNS
// ============================================================================

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // YOUR CODE HERE

    return 0;
}

// ============================================================================
// 1. PREFIX SUM - Answer range sum queries in O(1) after O(n) build
// ============================================================================
/*
int n, q;
cin >> n >> q;
vector<int> a(n);
for (auto& x : a) cin >> x;

// Build prefix sum
vector<long long> prefix(n + 1, 0);
for (int i = 1; i <= n; ++i) {
    prefix[i] = prefix[i-1] + a[i-1];
}

// Query range sum [a, b] (1-indexed)
while (q--) {
    int a, b;
    cin >> a >> b;
    cout << prefix[b] - prefix[a-1] << "\n";
}
*/

// ============================================================================
// 2. SLIDING WINDOW - Find min/max sum of k consecutive elements
// ============================================================================
/*
int n, k;
cin >> n >> k;
vector<int> a(n);
for (auto& x : a) cin >> x;

// Build prefix for window sums
vector<long long> prefix(n + 1, 0);
for (int i = 1; i <= n; ++i)
    prefix[i] = prefix[i-1] + a[i-1];

int minIdx = 1;
long long minSum = LLONG_MAX;
for (int i = 1; i <= n - k + 1; ++i) {
    long long sum = prefix[i + k - 1] - prefix[i - 1];
    if (sum < minSum) {
        minSum = sum;
        minIdx = i;
    }
}
cout << minIdx << "\n";
*/

// ============================================================================
// 3. MULTISET + UPPER_BOUND - Binary search on sorted data
// ============================================================================
/*
int n, m;
cin >> n >> m;
multiset<int> ms;
for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    ms.insert(x);
}

// For each query, find largest element <= c_money
for (int i = 0; i < m; i++) {
    int c_money;
    cin >> c_money;
    auto it = ms.upper_bound(c_money);
    if (it == ms.begin()) {
        cout << "-1 ";
    } else {
        --it;
        cout << *it << " ";
        ms.erase(it);
    }
}
*/

// ============================================================================
// 4. TWO POINTERS - Matching two sorted arrays
// ============================================================================
/*
int n, m, k;
cin >> n >> m >> k;
vector<int> a(n), b(m);
for (auto& x : a) cin >> x;
for (auto& y : b) cin >> y;
sort(a.begin(), a.end());
sort(b.begin(), b.end());

int i = 0, j = 0, count = 0;
while (i < n && j < m) {
    if (abs(a[i] - b[j]) <= k) {
        i++, j++, count++;
    } else if (a[i] < b[j]) {
        i++;
    } else {
        j++;
    }
}
cout << count << "\n";
*/

// ============================================================================
// 5. TWO POINTERS FROM ENDS - Matching pairs (greedy)
// ============================================================================
/*
int n, x;
cin >> n >> x;
vector<int> p(n);
for (auto& c : p) cin >> c;
sort(p.begin(), p.end());

int l = 0, r = n - 1, count = 0;
while (l < r) {
    if (p[l] + p[r] <= x) {
        count++;
        l++, r--;
    } else {
        r--;
    }
}
if (l == r) count++;  // single element left
cout << count << "\n";
*/

// ============================================================================
// 6. TWO POINTERS WITH PREFIX SUMS - Find equal prefix/suffix
// ============================================================================
/*
int n;
cin >> n;
vector<int> a(n);
vector<long long> prefix(n + 1, 0);
for (auto& x : a) cin >> x;

for (int i = 1; i <= n; ++i)
    prefix[i] = prefix[i-1] + a[i-1];

int l = 1, r = n - 1;
long long result = 0;
while (l <= r) {
    long long left = prefix[l];
    long long right = prefix[n] - prefix[r];

    if (left == right) {
        result = left;
        l++;
    } else if (left < right) {
        l++;
    } else {
        r--;
    }
}
cout << result << "\n";
*/

// ============================================================================
// 7. FREQUENCY MAP / COUNTING
// ============================================================================
/*
int n;
cin >> n;
map<int, int> cnt;
for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    cnt[x]++;
}

// Iterate over map
for (auto& [key, val] : cnt) {
    // use key, val
}
*/

// ============================================================================
// 8. DISTINCT COUNT - Sort and check adjacent elements
// ============================================================================
/*
int n;
cin >> n;
vector<int> a(n);
for (auto& x : a) cin >> x;
sort(a.begin(), a.end());

int distinct = 1;
for (int i = 1; i < n; i++) {
    if (a[i] != a[i-1]) distinct++;
}
cout << distinct << "\n";
*/

// ============================================================================
// 9. MODULAR ARITHMETIC - Circular distance
// ============================================================================
/*
int n, m;
cin >> n >> m;
int current = 1;
long long total = 0;

for (int i = 0; i < m; i++) {
    int next;
    cin >> next;
    total += (next - current + n) % n;
    current = next;
}
cout << total << "\n";
*/

// ============================================================================
// 10. GREEDY COUNTING - Partition into groups
// ============================================================================
/*
int n;
cin >> n;
int cnt[5] = {0};
for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    cnt[x]++;
}

int groups = 0;
groups += cnt[4];                    // groups of 4
groups += cnt[3];                    // groups of 3 + 1
cnt[1] = max(0, cnt[1] - cnt[3]);
groups += cnt[2] / 2;                // pairs
if (cnt[2] % 2 == 1) {               // one extra 2
    groups++;
    cnt[1] = max(0, cnt[1] - 2);
}
groups += (cnt[1] + 3) / 4;          // leftover 1s
cout << groups << "\n";
*/

// ============================================================================
// QUICK HELPERS
// ============================================================================

// Print vector
void printVec(vector<int>& v) {
    for (auto x : v) cout << x << " ";
    cout << "\n";
}

// Min element index
int minIdx(vector<int>& v) {
    return min_element(v.begin(), v.end()) - v.begin();
}

// Max element index
int maxIdx(vector<int>& v) {
    return max_element(v.begin(), v.end()) - v.begin();
}

// Sum of range [i, j] (0-indexed)
long long rangeSum(vector<int>& v, int i, int j) {
    return accumulate(v.begin() + i, v.begin() + j + 1, 0LL);
}

// GCD
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Power with modulo
long long modpow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
