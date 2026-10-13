#include <bits/stdc++.h>
using namespace std;
//check wheather the given array is sorted or not
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool sorted = true;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            sorted = false;
            break;
        }
    }
    if (sorted) {
        cout << "Array is sorted";
    } else {
        cout << "Array is not sorted";
    }

    return 0;
}