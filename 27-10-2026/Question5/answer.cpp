//this answer might seem like copy of gpt because it is , as on leetcode i just solved questions and their they 
//are in form of class and function but here i have written them in form of main function and also added input 
//and output statements.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int n = height.size();
    int amount = 0, maxamount = 0;
    int i = 0, j = n - 1;

    while (i < j) {
        if (height[i] < height[j]) {
            amount = height[i] * (j - i);
            i++;
        }
        else {
            amount = height[j] * (j - i);
            j--;
        }

        maxamount = max(maxamount, amount);
    }

    return maxamount;
}

int main() {
    int n;
    cout << "Enter number of heights: ";
    cin >> n;

    vector<int> height(n);

    cout << "Enter heights: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    cout << "Maximum area: " << maxArea(height) << endl;

    return 0;
}
