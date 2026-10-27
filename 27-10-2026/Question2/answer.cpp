//this answer might seem like copy of gpt because it is , as on leetcode i just solved questions and their they 
//are in form of class and function but here i have written them in form of main function and also added input 
//and output statements.
#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int noofzero = 0, noofone = 0, nooftwo = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (nums[i] == 0)
            noofzero++;
        else if (nums[i] == 1)
            noofone++;
        else
            nooftwo++;
    }

    for (int i = 0; i < noofzero; i++) {
        nums[i] = 0;
    }

    for (int i = noofzero; i < noofzero + noofone; i++) {
        nums[i] = 1;
    }

    for (int i = noofzero + noofone; i < n; i++) {
        nums[i] = 2;
    }
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements (0, 1, or 2): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sortColors(nums);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
    return 0;
}
