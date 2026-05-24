#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int steps = 0;
    while(x != 0){
        if(x - 5 >= 0) x -= 5, steps++;
        else if(x - 4 >= 0) x -= 4, steps++;
        else if(x - 3 >= 0) x -= 3, steps++;
        else if(x - 2 >= 0) x -= 2, steps++;
        else x -= 1, steps++;
    }

    cout << steps << "\n";
}