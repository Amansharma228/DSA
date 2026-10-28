//this answer might seem like copy of gpt because it is , as on leetcode i just solved questions and their they 
//are in form of class and function but here i have written them in form of main function and also added input 
//and output statements.
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1);
        int left = 0, maxlength = 0;

        for (int right = 0; right < s.length(); right++) {
            if (last[s[right]] >= left) {
                left = last[s[right]] + 1;
            }

            last[s[right]] = right;
            maxlength = max(maxlength, right - left + 1);
        }

        return maxlength;
    }
};

int main() {
    Solution obj;
    string s;
    cin >> s;

    cout << obj.lengthOfLongestSubstring(s);
    return 0;
}