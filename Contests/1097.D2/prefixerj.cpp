// in
// out
// obs
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        bool equaltop = false;
        bool equalbot = false;
        bool equal = false;
        int a = 2;
        int n;
        int leftb = 0, rightb = 0;
        int left = 0, right = 0;
        cin >> n;
        
        string str_a;
        string str_b;
        cin >> str_a;
        cin >> str_b;
        for(char& c : str_a) {
            if(c == '('){
                left++;
            }
            else{
                right++;
            }
        }  
        for(char& c : str_b) {
            if(c == '('){
                leftb++;
            }
            else{
                rightb++;
            }
        }  
        if (leftb == rightb)
        {
            equalbot = true;
        }
        if (left == right)
        {
            equaltop = true;
        }
        if (equaltop == true && equalbot == true){
            equal = true;
        }
        cout << (equal ? "YES" : "NO") << "\n";
    }
    return 0;
}
