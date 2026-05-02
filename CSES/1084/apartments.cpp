// n applicants, m appartments, k delta difference, a(n) desired appartment size, b(m) appartment size
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    int i = 0,j = 0, count = 0;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    for(auto& x : a) cin >> x;
    for(auto& y : b) cin >> y;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= k) i++, j++, count++;
        else if (a[i] < b[j]) i++;
        else j++;
    }
    cout << count << "\n";
    return 0;
}