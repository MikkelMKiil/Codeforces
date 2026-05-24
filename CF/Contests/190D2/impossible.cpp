#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        bool beautiful = false;
        int sum = 0;
        string s;
        cin >> s;
        int n = s.length();
        string::iterator it;
        while(!beautiful){
            if((stoi(s) % 4) > 0){
                beautiful = true;
            }
            else{

                for(it = s.begin(); it != s.end(); it++){
                    if(*it == '4')
                }
                
            }

        }
       
        cout << sum << "\n";
    }
    return 0;
}
// if sum % 4 == 0, beautiful == bad
// if sum % 4 > 0, cout