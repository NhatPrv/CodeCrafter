#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)  {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i:arr) {
        cout << i << " ";
    }
    return 0;
}