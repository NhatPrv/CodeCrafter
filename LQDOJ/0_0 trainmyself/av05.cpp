#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    long long a[n];
    int f = -1, l = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) f = i+1;
    }
    for (int j = n-1; j >= 0; j--) {
        if (a[j] > 0) l = j+1;
    }
    if (l != -1 && f != -1) {
        cout << l << " " << f;
    } else cout << -1 << " " << -1;

    return 0;
}