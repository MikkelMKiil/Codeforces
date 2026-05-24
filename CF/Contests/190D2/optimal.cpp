#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, a, b;
        long long sum = 0;
        cin >> n >> a >> b;
        if((a * 3) <= b){
            sum = n * a;
        }
        else{
            if(n % 3 == 0){
                sum = (n /3) * b;
            }
            else if (n % 3 == 1)
            {
                if(a > b){
                    sum = (n / 3) * b;
                    sum += b;
                }
                else{
                    sum = (n / 3) * b;
                    sum += a;
                }
            }
            else {
                if(b < a * 2){
                    sum = (n /3) * b;
                    sum += b;
                }
                else{
                    sum = (n / 3) * b;
                    sum += a + a;
                }
            }
        }
        cout << sum << "\n";
    }
}
// n = students
// a = ikey price
// b = gkey price
// ikey, costs a, takes n
// gkey, costs b, takes 3n