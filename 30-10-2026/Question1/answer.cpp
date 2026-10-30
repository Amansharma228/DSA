//this answer might seem like copy of gpt because it is , as on leetcode i just solved questions and their they 
//are in form of class and function but here i have written them in form of main function and also added input 
//and output statements.
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& candidates, int target, int start,
           vector<int>& temp, vector<vector<int>>& ans) {

    if (target == 0) {
        ans.push_back(temp);
        return;
    }

    for (int i = start; i < candidates.size(); i++) {
        if (candidates[i] > target) break;

        temp.push_back(candidates[i]);

        solve(candidates, target - candidates[i], i, temp, ans);

        temp.pop_back();
    }
}

int main() {
    int n, target;
    cin >> n;

    vector<int> candidates(n);
    for (int i = 0; i < n; i++) {
        cin >> candidates[i];
    }

    cin >> target;

    vector<int> temp;
    vector<vector<int>> ans;

    sort(candidates.begin(), candidates.end());

    solve(candidates, target, 0, temp, ans);

    for (auto v : ans) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}