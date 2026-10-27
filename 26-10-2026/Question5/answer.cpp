//this answer might seem like copy of gpt because it is , as on leetcode i just solved questions and their they 
//are in form of class and function but here i have written them in form of main function and also added input 
//and output statements.
#include <iostream>
using namespace std;

double myPow(double x, int n) {
    long long a = n;

    if (a < 0) {
        x = 1 / x;
        a = -a;
    }

    double ans = 1;

    while (a > 0) {
        if (a % 2 == 1) {
            ans *= x;
        }

        x *= x;
        a /= 2;
    }

    return ans;
}

int main() {
    double x;
    int n;

    cout << "Enter x and n: ";
    cin >> x >> n;

    cout << "Result: " << myPow(x, n) << endl;

    return 0;
}
