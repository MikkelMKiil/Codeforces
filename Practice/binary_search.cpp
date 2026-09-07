#include <bits/stdc++.h>
using namespace std;

// Recursive binary search on a sorted vector.
// Bounds are inclusive: the searched range is [lo, hi].
// Returns the index of target, or -1 if it is not present.
int tree(const vector<int>& A, int lo, int hi, int target) {
    if (lo > hi) return -1;                 // empty range
    int mid = lo + (hi - lo) / 2;           // overflow-safe midpoint
    if (A[mid] == target) return mid;
    if (A[mid] < target) return tree(A, mid + 1, hi, target);
    else                 return tree(A, lo, mid - 1, target);
}

int main() {
    int n = 100;
    vector<int> A(n);
    for (int i = 0; i < n; i++) A[i] = i;

    cout << tree(A, 0, (int)A.size() - 1, 0)   << "\n";  // 0
    cout << tree(A, 0, (int)A.size() - 1, 99)  << "\n";  // 99
    cout << tree(A, 0, (int)A.size() - 1, -5)  << "\n";  // -1
    cout << tree(A, 0, (int)A.size() - 1, 100) << "\n";  // -1
    return 0;
}
