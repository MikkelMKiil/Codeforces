#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Input example: 3 Arrays, 5 indices array, 3 indices array, 4 indices array.
// Output: ???
// Key observation: ???
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcases;
    
    cin >> testcases;
    for (int i = 0; i < testcases; ++i) {
        int size = 0, result = 0;
        cin >> size;
        vector<int> vect;

        for (int i = 0; i < size; ++i)
        {
            int index = 0;
            cin >> index;
            vect.push_back(index);
        }
        int best = 0, sum = 0;
        for (int j = 0; j < vect.size(); j++)
        {
            sum = min(vect[j],sum+vect[j]);
            best = min(best,sum);
        }
        cout << best << "\n";

    return 0;
    }
}