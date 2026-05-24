#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; // n students, m puzzles , f pieces
    int best = INT_MAX;
    cin >> n >> m;

    vector<int> a(m);
    for(auto& f : a) cin >> f;
    sort(a.begin(),a.end());
    for (int i = 0; i <= m - n; i++) {
        best = min(best, a[i + n - 1] - a[i]);
    }
    cout << best << "\n";
}