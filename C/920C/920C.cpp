#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool possible = true;
    cin >> n;
    vector<int> a(n);
    vector<int> moves(n-1);
    for(auto& x : a) cin >> x;
    for(auto& x : moves) cin >> x;
    int left = 0;
    int right = (n-1)/2;
    while(left > right){
        if(a[left] < a[right]){
            b.push_back(a[left]);
        }
    }
}