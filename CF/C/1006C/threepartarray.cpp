// input:  array(n)
// output: maximum possible value of sum1
// key obs: sum1 needs to be equal to sum3,
// what if you count from both sides, if their sum is equal save result.
// ignore case of l = r to ensure there is always a sum2. 
// prefix[i] = sum of a[0..i]     (so prefix[0] = a[0], prefix[n-1] = total)
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<long long> prefix(n + 1, 0);
    int l = 1, r = n - 1;
    long long sum_left = 0, sum_right = 0, perfect_sum = 0;
    for(auto& x : a) cin >> x;
    for(int i = 1; i <= n; ++i){
        prefix[i] = a[i-1] + prefix[i-1]; 
    }
    while(l <= r){
        sum_left = (prefix[l]);
        sum_right = (prefix[n] - prefix[r]);
        
        if (sum_left == sum_right){ 
            perfect_sum = sum_left;
            l++;
        }
        else if (sum_left < sum_right) l++;
        else r--;
        
    }
    cout << perfect_sum << "\n";
}