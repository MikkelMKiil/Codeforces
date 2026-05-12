//input
// t-- testcases, n-- size of array, a(n), no negatives
// problem
// first we need to se
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int mex = 0, sum = 0, n;
        cin >> n;
        vector<int> a(n);
        for(auto& x : a)cin >> x;
        int min = *min_element(a.begin(),a.end());
        int max = *max_element(a.begin(),a.end());
        //branch now , if no 0, then n times max else we need the 0, then max, then mex
        if(min != 0){
            cout << (n * max);
        }
        else{
            sort(a.begin(),a.end());
            vector<int>b;
            b.push_back(min);
            b.push_back(max);
            for(int i = 1; i < n - 1; i++){
                b.push_back(a[i]);
            }
            for(auto& x : b){
                if(x == mex && x == 0){
                    mex++;
                    sum += mex;
                }
                else if (x == mex){
                    mex++;
                    sum += (mex + max);
                }
                else sum += (mex + max);
            }
            cout << sum;
        }
    }
return 0;    
}