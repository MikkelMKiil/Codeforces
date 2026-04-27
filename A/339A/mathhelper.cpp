#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s.erase(remove(s.begin(), s.end(), '+'), s.end());
    sort(s.begin(), s.end());

    for (int i = 0; i < (int)s.size(); ++i) {
        if (i) cout << '+';
        cout << s[i];
    }
    return 0;

}