#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    int sum = 0, count = 0;
    int left = 0, right = 0;
    cin >> n >> x;
    vector<int> a(n);
    for(auto& x : a)cin >> x;
    while (right < n){
        sum += a[right];
        right++;
        while (sum > x){
            sum -= a[left];
            left++;
        }
        if (sum == x) count++;
    }
    cout << count;
    return 0;
}