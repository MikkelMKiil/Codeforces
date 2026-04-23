#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cnt[5] = {0};
    int n, x;
    int output = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        cnt[x]++;
    }
    output += cnt[4];
    output += cnt[3];
    cnt[1] = max(0, cnt[1] - cnt[3]);
    output += cnt[2] / 2;
    if (cnt[2] % 2 == 1) {
        output += 1;
        cnt[1] = max(0, cnt[1] - 2);
    }
    output += (cnt[1] + 3) / 4;
    cout << output << "\n";
    return 0;
}