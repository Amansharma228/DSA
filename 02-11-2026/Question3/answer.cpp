//this answer might seem like copy of gpt because it is , as on leetcode i just solved questions and their they 
//are in form of class and function but here i have written them in form of main function and also added input 
//and output statements.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ss = "";

        reverse(s.begin(), s.end());

        for (int i = 0; i < n; i++) {

            string word = "";

            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            reverse(word.begin(), word.end());

            if (word.length() > 0) {
                ss += " " + word;
            }
        }

        return ss.substr(1);
    }
};

int main() {
    Solution obj;

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string ans = obj.reverseWords(s);

    cout << "Reversed words: " << ans << endl;

    return 0;
}
