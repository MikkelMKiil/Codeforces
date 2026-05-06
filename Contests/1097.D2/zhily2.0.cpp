#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> a(n);
        bool zero = false;
        for (auto& x : a) { cin >> x; if (x == 0) zero = true; }
        long long mx = *max_element(a.begin(), a.end());
        if (!zero) {
            cout << (long long)n * mx << "\n";
            continue;
        }
        sort(a.begin(), a.end());
        vector<long long> b;
        b.reserve(n);
        b.push_back(mx);
        b.push_back(0);
        for (int i = 1; i < n - 1; ++i) b.push_back(a[i]);
        vector<bool> seen(n + 2, false);
        int mex = 0;
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            long long v = b[i];
            if (v <= n) seen[v] = true;
            while (seen[mex]) mex++;
            sum += mex + mx;
        }
        cout << sum << "\n";
    }
}