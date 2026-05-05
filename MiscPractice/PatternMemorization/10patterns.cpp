#include <bits/stdc++.h>
using namespace std;

// 1 read n and array
int one(){
 int n, min, max;
 cin >> n;
 vector<int> a(n);
 for(auto& x : a) cin >> x;
}

// 2 sort
int two(){
 int n, min, max;
 cin >> n;
 vector<int> a(n);
 for(auto& x : a) cin >> x;
 sort(a.begin(),a.end());
}
// 3 walk adjacent pairs
int three(){
 int n, min, max;
 cin >> n;
 vector<int> a(n);
 for(auto& x : a) cin >> x;
 sort(a.begin(),a.end());
 for(int i = 1; i < n; ++i){
    if(a[i - 1] < a[i]){
        cout << "larger";
    }
 }
}
// 4 boolean yes no
int four(){
 int n, min, max;
 bool larger = true;
 cin >> n;
 vector<int> a(n);
 for(auto& x : a) cin >> x;
 sort(a.begin(),a.end());
 for(int i = 1; i < n; ++i){
    if(a[i-1] < a[i]){
        larger = true;
        break;
    }
}
 cout << (larger ? "YES" : "NO");
}
// 5 multi test case
int five(){
 int t, n;
 cin >> t >> n;
 while(t--){
    // do something
 }
    
}
// 6 count with map
int six(){
 int n, mini, maxi;
 cin >> n;
 vector<int> a;
 map<int,int> cnt;
 for(int x : a) cnt[x]++;
 for(auto& [k, v] : cnt){

 }
}
// 7 find min max
int seven(){
 int n, lo, hi;
 cin >> n;
 vector<int> a(n);
 for(auto& x : a) cin >> x;
 lo = *min_element(a.begin(), a.end());
 hi = *max_element(a.begin(), a.end());
 cout << lo << hi << "\n";
}
// 8 sum
int eight(){
 int n;
 cin >> n;
 vector<int> a(n);
 for(auto& x : a) cin >> x;
 cout << accumulate(a.begin(), a.end(), 0LL);
}
// 9 two pointers from ends
int nine(){
 int n;
 cin >> n;
 int l = 0, r = n - 1;
 while(l < r){
    // if x > y, r--
    // if x < y, l++
 }
}
// 10 output array with spaces
int ten(){
 int n;
 cin >> n;
 vector<int> a(n);
 for(auto& x : a) cin >> x;
 for(auto& x : a) cout << x << " ";
}
