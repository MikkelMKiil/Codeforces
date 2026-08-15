#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    long long pairs = 0;
    for(auto& x : a) cin >> x;
    for(int i = 1; i <= n; i++) {
      freq[i - a[i-1]]++;
    }
    for(auto const& [key, count] : freq) {
      pairs += 1LL * count * (count - 1) / 2;
    }
    cout << pairs << "\n";
    }
  }


