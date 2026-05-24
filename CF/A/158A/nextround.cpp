#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> scores(n);
    for (int i = 0; i < n; i++) cin >> scores[i];
    
    int kvalue = scores[k-1];
    
    int output = 0;
    
    for (int s : scores) {
        if (s > 0 && s >= kvalue) output++;
    }
    
    cout << output;
    return 0;
}