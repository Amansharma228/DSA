//this answer might seem like copy of gpt because it is , as on leetcode i just solved questions and their they 
//are in form of class and function but here i have written them in form of main function and also added input 
//and output statements.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0, idx = 0;

        while (i < n) {
            char ch = chars[i];
            int count = 0;

            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            chars[idx++] = ch;

            if (count > 1) {
                string x = to_string(count);

                for (auto d : x) {
                    chars[idx++] = d;
                }
            }
        }

        return idx;
    }
};

int main() {
    Solution obj;

    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    int len = obj.compress(chars);

    cout << "Compressed length: " << len << endl;
    cout << "Compressed string: ";

    for (int i = 0; i < len; i++) {
        cout << chars[i];
    }

    cout << endl;

    return 0;
}
