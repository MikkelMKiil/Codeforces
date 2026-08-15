#include<bits/stdc++.h>

using namespace std;

int main(){
    int levels, x, y;
    bool winnable = true;
    cin >> levels >> x;
    vector<int> a(x);
    for(auto& x : a) cin >> x;
    cin >> y;
    if(x == 0 && y == 0 && levels > 0){
        winnable = false;
    }
    else if (x == 0 && y == 0 && levels == 0){
        cout << "I become the guy.";
        return 0;
    }
    vector<int> b(y);
    for(auto& y : b) cin >> y;
    a.insert(a.end(),b.begin(), b.end());
    sort(a.begin(), a.end());
    if(winnable){
        if(a.back() < levels || a.front() != 1){
            winnable = false;
        }
        else{
            for (int i = 1; i < a.size(); i++)
            {
                if (abs(a[i-1] - a[i]) > 1){
                    winnable = false;
                    break;
                } 
            }
        }
    }
    cout << (winnable ? "I become the guy." : "Oh, my keyboard!") << "\n";
    return 0;
}
