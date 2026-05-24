#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Input:  The first line contains two integers n and m
// (2 ≤ n ≤ 105, 1 ≤ m ≤ 105). The second line contains m integers
// a1, a2, ..., am (1 ≤ ai ≤ n). 
// Note that Xenia can have multiple consecutive tasks in one house.

// Output: Print a single integer — the time Xenia needs to complete
// all tasks.
// Please, do not use the %lld specifier to read or write 64-bit integers
// in С++. It is preferred to use the cin, cout streams or the %I64d
// specifier.

// Key observation: 
// start at house 1
// total = 0
// for each task house a[i]:
//     total += clockwise distance from current to a[i]
//     current = a[i]
// print total

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int houses, house, tasks;
    int currenthouse = 1;
    long long answer = 0;
    cin >> houses >> tasks;

    for(int i = 0; i < tasks; i++){
        cin >> house;
        answer += (house - currenthouse + houses) % houses;
        currenthouse = house;
    }
    cout << answer << "\n";
    return 0;
}