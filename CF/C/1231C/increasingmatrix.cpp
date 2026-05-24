#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows, cols;
    cin >> rows >> cols;
    int sum = 0;
    vector<vector<int>> grid(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++)
      for (int j = 0; j < cols; j++)
          cin >> grid[i][j];

  //build a matrix
    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = cols - 1; j >= 0; j--){
            if((grid[i][j]) == 0){
                {
                    int right = (j < cols - 1) ? grid[i][j+1] : INT_MAX;
                    int below = (i < rows - 1) ? grid[i+1][j] : INT_MAX;
                    int current = min(right, below) - 1;
                    grid[i][j] = current;
                    bool leftOk = (j == 0) || grid[i][j-1] < current;
                    bool aboveOk = (i == 0) || grid[i-1][j] < current;
                    if(leftOk && aboveOk){
                        sum += current;
                    }
                    else{
                        cout << -1 << "\n";
                        return 0;
                    }
                }
            }
            else {
                if (j < cols - 1 && grid[i][j] >= grid[i][j+1]){
                    cout << -1 << "\n";
                    return 0;
                }
                if (i < rows - 1 && grid[i][j] >= grid[i+1][j]){
                    cout << -1 << "\n";
                    return 0;
                }
                sum += grid[i][j];
            }
        }

    }

    cout << sum << "\n";
    return 0;
}