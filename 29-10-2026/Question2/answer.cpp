//this answer might seem like copy of gpt because it is , as on leetcode i just solved questions and their they 
//are in form of class and function but here i have written them in form of main function and also added input 
//and output statements.
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int first = nums[i];
            int second = target - first;

            if (m.find(second) != m.end()) {
                return {i, m[second]};
            }
            else {
                m.insert({first, i});
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    int n, target;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> target;

    vector<int> ans = obj.twoSum(nums, target);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}