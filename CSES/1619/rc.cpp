#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int maximal = 0;
    cin >> n;
    vector<pair<int,int>> events;
    for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    events.push_back({a, 1});    // arrival: +1
    events.push_back({b, -1});   // departure: -1
    }
    sort(events.begin(), events.end());
    int count = 0, maxcount = 0;
    for (auto& [time, type] : events) {
        count += type;    // +1 for arrival, -1 for departure
        maxcount = max(maxcount, count);
    }
    cout << maxcount << "\n";

    return 0;
}