#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;   cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)  {
        cin >> a[i];
    }
    for (int i = k; i < n; i++) {
        cout << a[i] << " ";
    }
    for (int i = 0; i < k; i++) {
        cout << 0 << " ";
    }

    return 0;
}   