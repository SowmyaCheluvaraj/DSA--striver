#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> mpp;
    //unordered_map<int,int>mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cin >> q;
if (!(cin >> q) || q < 0) {
    cerr << "q must be a non-negative integer\n";
    return 1;
}

for (int i = 0; i < q; i++) {
    int number;
    cin >> number;
    cout << mpp[number] << '\n';
}
    return 0;
}