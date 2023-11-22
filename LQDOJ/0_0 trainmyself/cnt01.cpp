#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> cnt(1000004);
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cnt[arr[i]]++;
    }
    for (int i = 0;i < n; i++) {
        if (cnt[arr[i]] != 0) {
            cout << arr[i] << " " << cnt[arr[i]] << endl;
        }
    }

    return 0;
}