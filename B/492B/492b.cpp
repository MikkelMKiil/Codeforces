#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, l;
  cin >> n >> l;
  vector<int> a(n);
  for(auto& x : a) cin >> x;
  sort(a.begin(),a.end());
  double biggest = max(a[0],l - a[n-1]);
  for (int i = 0; i < n - 1; ++i) {
    double gap = (a[i+1] - a[i]) / 2.0;
    biggest = max(biggest, gap);
  }
  cout << fixed << setprecision(10) << biggest << "\n";
	return 0;
}
