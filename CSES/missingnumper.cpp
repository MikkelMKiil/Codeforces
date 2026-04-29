#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n - 1);
    for (auto& x : a) cin >> x;
    sort(a.begin(), a.end());
    bool first = true;
    int last;
    for (auto& x : a){
        if (first) last = x;
        else if (abs(last - x) > 1) cout << x;
        else last = x, cout << last;
    } 
}