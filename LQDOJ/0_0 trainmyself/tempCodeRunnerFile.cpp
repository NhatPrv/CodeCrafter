#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    long long ans = n*(n-1);
    for (int i = n-2; i > 0; i--) {
        if (__gcd(i, n) == 1) {
            cout << ans*i;
            return 0;
        }
    }

    return 0;
}