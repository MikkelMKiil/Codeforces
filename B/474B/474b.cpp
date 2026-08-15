#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    
    cin >> n;
    vector<int> a(n);
    for(auto& x : a) cin >> x; 
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        if(i == 0){
            b[i] = a[i];
        }
        else{
            b[i] = b[i - 1] + a[i];
        }
    }
    cin >> t;
    while(t--){
        int target, lo, mid, hi;
        cin >> target;
        lo = 0;
        hi = n-1;
        while(lo < hi) {
            mid = lo + (hi - lo) / 2;
            if(b[mid] < target){
                lo = mid + 1;
            }
            else{
                hi = mid;
            }
        }
        cout << lo + 1 << "\n";
    }
}
// test code 4 4 4 4 4 4 3 9 8 16