//Drill: sort, range-for, comparing adjacent. 
//Count how many distinct values.
// Two solutions exist (sort + walk, or set).
// Try the sort version first.

#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n);
    for (auto& x : a){
        cin >> x;
    }
    sort(a.begin(),a.end());
    int distinct = 1;
    for(int i = 1; i < (int)a.size(); i++){
        if (a[i] != a[i-1]) distinct++;
    }
    cout << distinct << "\n";
}