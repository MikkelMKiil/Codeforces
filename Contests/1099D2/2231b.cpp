#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int failindex = -1;
        bool possible  = true;
        vector<int> a(n);
        for(auto& x : a) cin >> x;
        //find first flaw
        for (int i = 1; i < n; i++)
        {
            if(a[i-1] > a[i] && failindex == -1){
                failindex = i;
            }
        }
        

        for(auto& x : a){
            cout << x << " ";
        }
        cout << "\n";
    }
}