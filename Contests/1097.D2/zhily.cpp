// input: testcases, int n, array(n) (input never exceeds 10^5, no long longs)
// output: k positive integers
// key obs: select ONE index, push right onto left (2 pointers?), 
// push right onto left until first index, count all positive.
// you might want the right most one that is greater than its neighbour?

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--){
        int max_desc = 0;
        cin >> n;
        vector<long long> a(n);
        for(auto& x : a)cin >> x;      
        for(int j = n-1; j > 0; --j){
            if ((0 <= a[j])){
                a[j-1] += a[j];
            }
        }

        for(auto& x : a) if(x > 0) max_desc++;
        cout << max_desc << "\n";
    }
    return 0;
}
