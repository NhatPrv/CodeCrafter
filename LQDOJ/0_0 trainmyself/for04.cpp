#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    int ans = 0;
    for (int i = 1; i*i<=n; i++) {
        if (n%i == 0) ans += 2;
        if (i*i == n) ans--;
    }
    cout << ans;

    return 0;
}