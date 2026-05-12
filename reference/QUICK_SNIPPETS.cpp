// QUICK SNIPPETS - COPY THESE DIRECTLY
#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// FAST MAIN
// ============================================================================
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

// ============================================================================
// PREFIX SUM
// ============================================================================
vector<long long> buildPrefix(vector<int>& a) {
    int n = a.size();
    vector<long long> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++)
        prefix[i] = prefix[i-1] + a[i-1];
    return prefix;
}

long long rangeQuery(vector<long long>& prefix, int l, int r) {
    return prefix[r] - prefix[l-1];
}

// ============================================================================
// TWO POINTERS - SORTED ARRAYS
// ============================================================================
int twoPointerMatch(vector<int>& a, vector<int>& b, int k) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0, cnt = 0;
    while (i < a.size() && j < b.size()) {
        if (abs(a[i] - b[j]) <= k) {
            i++, j++, cnt++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }
    return cnt;
}

// ============================================================================
// TWO POINTERS - FROM ENDS (GREEDY PAIRING)
// ============================================================================
int greedyPair(vector<int>& v, int limit) {
    sort(v.begin(), v.end());
    int l = 0, r = v.size() - 1, cnt = 0;
    while (l < r) {
        if (v[l] + v[r] <= limit) {
            l++, r--, cnt++;
        } else {
            r--;
        }
    }
    if (l == r) cnt++;
    return cnt;
}

// ============================================================================
// MULTISET BINARY SEARCH
// ============================================================================
int findLargestLessEqual(multiset<int>& ms, int x) {
    auto it = ms.upper_bound(x);
    if (it == ms.begin()) return -1;
    --it;
    return *it;
}

// ============================================================================
// SLIDING WINDOW - MIN SUM OF K ELEMENTS
// ============================================================================
int minSumWindow(vector<int>& a, int k) {
    vector<long long> prefix(a.size() + 1, 0);
    for (int i = 1; i <= a.size(); i++)
        prefix[i] = prefix[i-1] + a[i-1];

    long long minSum = LLONG_MAX;
    int idx = 0;
    for (int i = 1; i <= a.size() - k + 1; i++) {
        long long sum = prefix[i + k - 1] - prefix[i-1];
        if (sum < minSum) {
            minSum = sum;
            idx = i;
        }
    }
    return idx;
}

// ============================================================================
// DISTINCT COUNT
// ============================================================================
int countDistinct(vector<int>& a) {
    sort(a.begin(), a.end());
    int cnt = 1;
    for (int i = 1; i < a.size(); i++)
        if (a[i] != a[i-1]) cnt++;
    return cnt;
}

// ============================================================================
// FREQUENCY MAP
// ============================================================================
map<int, int> buildFreqMap(vector<int>& a) {
    map<int, int> freq;
    for (int x : a) freq[x]++;
    return freq;
}

// ============================================================================
// GCD & MODULAR EXPONENTIATION
// ============================================================================
long long gcd(long long a, long long b) {
    return b ? gcd(b, a % b) : a;
}

long long modpow(long long base, long long exp, long long mod) {
    long long res = 1;
    while (exp > 0) {
        if (exp & 1) res = res * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return res;
}

// ============================================================================
// MODULAR CIRCULAR DISTANCE
// ============================================================================
long long circularDistance(int n, int from, int to) {
    return (to - from + n) % n;
}

// ============================================================================
// PRINT HELPERS
// ============================================================================
void printVec(vector<int>& v) {
    for (int x : v) cout << x << " ";
    cout << "\n";
}

void printVecNewline(vector<int>& v) {
    for (int x : v) cout << x << "\n";
}
