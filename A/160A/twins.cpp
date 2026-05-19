#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int score = 0;
    int sum = 0;
    int cnt = 0;
    cin >> n;
    vector<int>a(n);

    for(auto& x : a) cin >> x, sum += x;
    sort(a.begin(),a.end(), greater<int>());
    for(auto& x : a){
        score += x;
        cnt++;
        if(score * 2 > sum) break;
    }
    
    cout << cnt << "\n";
}