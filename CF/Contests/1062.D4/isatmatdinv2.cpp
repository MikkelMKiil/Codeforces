#include <bits/stdc++.h>
using namespace std;

namespace fastio {
    char buf[1 << 22];
    int pos, len;

    char gc() {
        if (pos == len) {
            len = fread(buf, 1, sizeof(buf), stdin);
            pos = 0;
        }
        return buf[pos++];
    }

    int readint() {
        int x = 0; char c = gc();
        while (c < '0' || c > '9') c = gc();
        while (c >= '0' && c <= '9') { x = x*10 + (c-'0'); c = gc(); }
        return x;
    }
}

int main(){
    int t = fastio::readint();
    while (t--){
        int n = fastio::readint();
        vector<int> a(n);
        bool sortable = false;
        for(auto& x : a) x = fastio::readint();
        for(int i = 1; i < n; ++i){
            if ((a[i-1] % 2) != (a[i] % 2))
            { sortable = true; break; }
        }
        if (sortable) sort(a.begin(), a.end());
        for(auto& x : a) printf("%d ", x);
        printf("\n");
    }
    return 0;
}
