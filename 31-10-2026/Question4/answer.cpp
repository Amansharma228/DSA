//this answer might seem like copy of gpt because it is , as on leetcode i just solved questions and their they 
//are in form of class and function but here i have written them in form of main function and also added input 
//and output statements.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> ans;

    int row = 0, col = 0;
    int maxrow = m - 1, maxcol = n - 1;

    while(row <= maxrow && col <= maxcol) {

        for(int j = col; j <= maxcol; j++) {
            ans.push_back(matrix[row][j]);
        }
        row++;

        for(int i = row; i <= maxrow; i++) {
            ans.push_back(matrix[i][maxcol]);
        }
        maxcol--;

        if(row <= maxrow) {
            for(int j = maxcol; j >= col; j--) {
                ans.push_back(matrix[maxrow][j]);
            }
            maxrow--;
        }

        if(col <= maxcol) {
            for(int i = maxrow; i >= row; i--) {
                ans.push_back(matrix[i][col]);
            }
            col++;
        }
    }

    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}