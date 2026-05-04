#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while (t--){
        int offset_a = 0, offset_b = 0;
        cin >> n;
        vector<int> a(n);
        for(auto& x : a) cin >> x;
        for(auto& x : a) cout << x;
        cout << offset_a << offset_b;

    }
    return 0;
}
