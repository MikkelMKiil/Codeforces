#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt = 1, best = 1;
    for(auto& x : a) cin >> x;
    for(int i = 1; i < n; i++)
    {
        if(a[i] < a[i-1]){
            best = max(best, cnt);
            cnt = 1;
        }
        else{
            cnt++;
        }
    }
    cout << max(cnt, best) << "\n";
}