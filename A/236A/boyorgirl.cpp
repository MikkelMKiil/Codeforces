#include <iostream>
using namespace std;
int main() {
    int seen = 0;
    string w;
    cin >> w;
    int n = w.length();
    while (n--){
        seen |= (1 << (w[n] - 'a'));
    }
    cout << (__builtin_popcount(seen) % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}