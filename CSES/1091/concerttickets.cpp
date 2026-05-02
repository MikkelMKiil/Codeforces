#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    multiset<int> ms;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        ms.insert(x);
    }
    for(int i = 0; i < m; i++){
        int c_money; cin >> c_money;
        auto it = ms.upper_bound(c_money);
        if (it == ms.begin()){
            cout << "-1" << " ";
        }
        else {
            --it;
            cout << *it << " ";
            ms.erase(it);
        }
    }
}
