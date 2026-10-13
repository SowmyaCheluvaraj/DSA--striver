#include <bits/stdc++.h>
using namespace std;
//largest element in the array
int largestElement(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
     int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << largestElement(arr, n) << endl;
    return 0;
}
   