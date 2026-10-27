//this answer might seem like copy of gpt because it is , as on leetcode i just solved questions and their they 
//are in form of class and function but here i have written them in form of main function and also added input 
//and output statements.

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    int i = 0;
    int j = m * n - 1;

    while (i <= j) {
        int mid = i + (j - i) / 2;

        int row = mid / n;
        int col = mid % n;

        if (matrix[row][col] == target) {
            return true;
        }
        else if (matrix[row][col] < target) {
            i = mid + 1;
        }
        else {
            j = mid - 1;
        }
    }

    return false;
}

int main() {
    int m, n, target;

    cout << "Enter rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    cout << "Enter matrix elements in sorted order: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter target: ";
    cin >> target;

    if (searchMatrix(matrix, target)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}
