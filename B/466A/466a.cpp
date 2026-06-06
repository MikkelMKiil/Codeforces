#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  if(a * m <= b){
    //in case a is more efficient or equal, always buy a
    cout << n * a << "\n";
  }
  else{
    if(n % m == 0){
      cout << (n / m) * b << "\n";
    }
    else{
      int case1, case2;
      case1 = ((n % m) * a) + (n / m) * b;
      case2 = (n / m ) * b + b;
      cout << max(case1,case2) << "\n";
      } 
    }
}

