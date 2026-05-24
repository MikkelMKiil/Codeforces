#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string t = "WUB";
    int pos = s.find(t);
    while(pos != -1){
        if (pos < (s.size() - 3) && pos != 0){
            s.replace(pos, 3, " ");
        }
        else{
            s.erase(pos, 3);
        }
        pos = s.find(t);
    }
    cout << s << "\n" ;
}