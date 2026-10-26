#include <iostream>
#include <vector>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int n = grid.size();
    vector<int> ans(2);
    vector<int> check(n * n, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            check[grid[i][j] - 1]++;
        }
    }

    for (int i = 0; i < n * n; i++) {
        if (check[i] == 2) {
            ans[0] = i + 1;
            break;
        }
    }

    for (int i = 0; i < n * n; i++) {
        if (check[i] == 0) {
            ans[1] = i + 1;
            break;
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    vector<int> ans = findMissingAndRepeatedValues(grid);

    cout << ans[0] << " " << ans[1];

    return 0;
}