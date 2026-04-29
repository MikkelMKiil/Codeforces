#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll n; 
    cin >> n;
    vector<ll> a;
    a.push_back(n);
    while (n != 1) {
        if(n % 2 == 0){
            n = (n / 2);
        }
        else{
            n = (n * 3) + 1;
        } 
        a.push_back(n);
    }
    for (auto& x : a) cout << x << " ";
    cout << "\n";
    return 0;
}