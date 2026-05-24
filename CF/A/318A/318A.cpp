#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    if(k <= n/2 && n % 2 == 0 || k <= n/2 + 1 && n % 2 == 1){
        cout << 2 * (k - 1) + 1 << "\n";
    }
    else{
        if(n % 2 == 1){
            cout << 2 * (k - n/2 - 1) << "\n";
        }
        else{
            cout << 2 * (k - n/2) << "\n";
        }
    }
}
// 999999999999 499999999999
// 999999999997 499999999999
