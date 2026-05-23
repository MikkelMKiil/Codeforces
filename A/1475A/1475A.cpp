#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        bool div = false;
        if(n & (n - 1)) div = true;
        cout << (div ? "YES" : "NO") << "\n";
    }
}