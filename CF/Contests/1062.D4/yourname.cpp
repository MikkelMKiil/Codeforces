#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    string a, b;
    while (t--){
        bool equal = true; 
        cin >> n >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int i = 0; i < n; ++i){
            if (a[i] != b[i]) equal = false;
        }
        cout << (equal ? "YES" : "NO") << "\n";
    }
    return 0;
}
