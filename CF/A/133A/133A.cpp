#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool seen = false;
    for(auto& c : s){
        if(c == 'H' || c == 'Q' || c == '9'){
            seen = true;
        }
    }
    cout << (seen ? "YES" : "NO") << "\n";
}