#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    char first_char = s.front();
    if (toupper(first_char) == first_char){
        cout << s;
    }
    else
    {
        s.front() = toupper(s.front());
        cout << s;
    }

    return 0;
}