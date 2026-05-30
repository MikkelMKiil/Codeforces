#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    bool parity = false;
    if(min(n,m) % 2 == 1) parity = true;

    cout << (parity ? "Akshat" : "Malvika") << "\n";
    return 0;
}