#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n - 1);
    for (auto& x : a) cin >> x;
    sort(a.begin(), a.end());

    for (int i = 0; i < (int)a.size(); i++) {
        if (a[i] != i + 1) {
            cout << i + 1 << "\n";
            return 0;
        }
    }
cout << n << "\n";
}