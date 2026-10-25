
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int i = 0;

        while (i < n) {
            int count = 1;

            while (i + 1 < n && arr[i] == arr[i + 1]) {
                count++;
                i++;
            }

            if (count % 2 != 0) {
                cout << arr[i] << endl;
                break;
            }

            i++;
        }
    }

    return 0;
}
