#include<bits/stdc++.h>
using namespace std;
// input
// n -- computers, k -- participants
// a[speed, speed, speed]
// problem
// k needs n computers, n computers should have highest speed.
// reverse sort, output a[k-1] since sort ensures that is slowest
int main(){
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(auto& x : a) cin >> x;
    sort(a.begin(), a.end(), greater<>());
    cout << a[k-1] << "\n";
    return 0;
}