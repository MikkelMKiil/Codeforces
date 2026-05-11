#include <bits/stdc++.h>
using namespace std;

// 1 read n and array
int main(){
   int n;
   cin >> n;
   vector<int> a(n);
   for (auto& x : a) cin >> x;
}
// 2 sort
sort(a.begin(), a.end());
sort(a.begin(), a.end(), greater<>());
// 3 walk adjacent pairs
for(int i = 1; i < n; ++i){
   if(a[i-1] > a[i]){ // adjacent logic here
      }
}
// 4 boolean yes no
seen = true;
cout << (seen ? "YES" : "NO") << "\n";


// 5 multi test case
int t;
cin >> t;
while(t--){
   // runs every case
}
// 6 count with map
map<int,bool> unique;


// 7 find min max
int max = *max_element(a.begin(),a.end());
int min = *min_element(a.begin(),a.end());
// 8 sum
long long sum = accumulate(a.begin(),a.end(), 0LL);

// 9 two pointers from ends
int l = 0, r = n-1;
while(l < r){
   if(logic goes here) r++, l++;
   else if (more logic) r++;
   else(force move)
   l++;
}
// 10 output array with spaces

cout << x << " ";