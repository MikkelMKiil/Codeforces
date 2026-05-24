#include <iostream>
#include <vector>
using namespace std;
int main() {
int n, h;
int sum = 0;
cin >> n >> h;
vector<int> a(n);
for(int i = 0; i < n; i++){
    cin >> a[i]; 
    if(a[i] <= h) a[i] = 1;
    else a[i] = 2;
    sum += a[i];
}

cout << sum;

return 0;       
}