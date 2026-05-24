#include<bits/stdc++.h>
using namespace std;

// Input:  n, amount of integers. k, planks
//         h1 < 100 sequence of integers (array)
//         
// Output: output j, minimum, closest to k greedy?
// Key observation: select k indices consequetively, with lowest sum
// prefix sum, check every k range until, save lowest to lowest if smaller, output if equal to k.


int main(){
    int n, k;
    int j = 1;
    int lowest = INT_MAX;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> prefix(n + 1, 0);
    for(auto& x : a) cin >> x;
    for (int i = 1; i <= n; ++i) {
        prefix[i] = (prefix[i-1] + a[i - 1]);}
    

    for (int i = 1; i <= n - k + 1; ++i){
        int sum = prefix[i + k - 1] - prefix[i - 1];
        if (sum < lowest) 
        {
            j = i;
            lowest = sum;
        }
    }
    cout << j << "\n";
    return 0;
}