#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    long long ans = 0;
    while (n--) {
        long long x;    cin >> x;
        if (x&1) ans+=x;
    }
    cout << ans;

    return 0;
}