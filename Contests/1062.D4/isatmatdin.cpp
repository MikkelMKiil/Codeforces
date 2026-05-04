#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        vector<int> a(n);
        bool sortable = false;
        for(auto& x : a) cin >> x;
        for(int i = 1; i < n; ++i){
            if ((a[i-1] % 2) != (a[i] % 2)){
                sortable = true;}
        }
        if (sortable) sort(a.begin(),a.end());
        for(auto& x : a) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
