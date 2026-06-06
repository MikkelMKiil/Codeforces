#include<bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin >> n;
  bool firstseen = false;
  for(char c: to_string(n)){
    int digit = c - '0';
    
    if(9 - digit == 0 && firstseen == false){
      firstseen = true;
      cout << digit;
    }
    else{ 
      cout << min(9 - digit, digit);
      firstseen = true;
    }
    
  }
  cout << "\n";
}
