// n children, x weight, p(n) weight of individual child
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    int l = 0, r = n - 1, gondolas = 0;
    vector<int> p(n);
    for (auto& c : p) cin >> c;
    sort(p.begin(), p.end());
    while(l < r){
        if (p[r] == x) gondolas++, r--;
        else if ((p[l] + p[r]) <= x) gondolas++, l++, r--;
        else if ((p[l] + p[r]) >= x) gondolas++, r--;
    }
    if (l == r) gondolas++;

    cout << gondolas << "\n";
}