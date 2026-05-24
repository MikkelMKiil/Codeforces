#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    while (n--) {
        string op;
        cin >> op;
        if (op == "++X" || op == "X++"){
            x++;   
        } 
        else if (op == "--X" || op == "X--"){
            x--;
        }
        
    }
    cout << x;
    return 0;
}