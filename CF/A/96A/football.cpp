#include<bits/stdc++.h>
using namespace std;

int main(){
    int count_0 = 0;
    int count_1 = 0;
    bool seen = false;
    string s;
    cin >> s;
    for(auto& c : s){
        if (c == '1'){
            count_1++;
            count_0 = 0;
        }
        else{
            count_0++;
            count_1 = 0;
        }
        if (count_0 == 7 || count_1 == 7){
            seen = true;
        }
    }
    cout << (seen ? "YES" : "NO") << "\n";
}