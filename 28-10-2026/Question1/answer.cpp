//this answer might seem like copy of gpt because it is , as on leetcode i just solved questions and their they 
//are in form of class and function but here i have written them in form of main function and also added input 
//and output statements.
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        int x = 1;

        for (int i = 0; i < n; i++) {
            ans[i] = x;
            x *= nums[i];
        }

        x = 1;

        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= x;
            x *= nums[i];
        }

        return ans;
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = obj.productExceptSelf(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}