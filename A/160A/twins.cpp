#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cin >> n;
    vector<int>a(n);

    for(auto& x : a) cin >> x;
    sort(a.begin(),a.end());
    
    cout << sum << "\n";
}