#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    bool square = true;
    int last = 0;
    for(int i = 0; i < 4; ++i){
        int x;
        cin >> x;
        if (i == 0){
            last = x; 
        }
        else if (last != x) square = false;
    }
    cout << (square ? "YES" : "NO") << "\n";    
    }
    return 0;
}