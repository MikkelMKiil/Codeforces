#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> digits;
        if (n == 0) digits.push_back(0);
        while (n > 0) {
            digits.push_back(n % 10);
            n /= 10;
        }
        reverse(digits.begin(), digits.end());
        int count = 0;
        for (int d : digits) if (d != 0) count++;
        cout << count << "\n";
        for (int i = 0; i < digits.size(); ++i) {
            if (digits[i] != 0) {
                cout << digits[i] << string(digits.size() - i - 1, '0') << " ";
            }
        }
        cout << "\n";
    }
}