//this answer might seem like copy of gpt because it is , as on leetcode i just solved questions and their they 
//are in form of class and function but here i have written them in form of main function and also added input 
//and output statements.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int leftMax = 0;
        int rightMax = 0;
        int water = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] >= leftMax) {
                    leftMax = height[left];
                } else {
                    water += leftMax - height[left];
                }

                left++;
            } else {
                if (height[right] >= rightMax) {
                    rightMax = height[right];
                } else {
                    water += rightMax - height[right];
                }

                right--;
            }
        }

        return water;
    }
};

int main() {
    Solution obj;

    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout << obj.trap(height);

    return 0;
}
