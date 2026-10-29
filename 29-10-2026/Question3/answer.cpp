//this answer might seem like copy of gpt because it is , as on leetcode i just solved questions and their they 
//are in form of class and function but here i have written them in form of main function and also added input 
//and output statements.

#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    // Step 1: Find pivot
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    // Step 2: Find next greater element and swap
    if (i >= 0) {
        int j = n - 1;

        while (nums[j] <= nums[i]) {
            j--;
        }

        swap(nums[i], nums[j]);
    }

    // Step 3: Reverse the suffix
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    nextPermutation(nums);

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}
