#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        bool flag = true;

        int n = 0;
        cin >> n;
        vector<int> v(n);
        for (auto& x : v) cin >> x;

        sort(v.begin(),v.end());
        

        for (int i = 0; i < (int)v.size() - 1; i++){
            if (v[i+1] - v[i] > 1) flag = false;
        }

        if (flag) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}