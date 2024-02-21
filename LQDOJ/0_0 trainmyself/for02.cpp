#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    n = (n%2==0)?(n-1):n;
    long long ans = 0;
    for (long long i = 1; i <= n; i+=2) {
        ans += i;
    }
    cout << ans;
    return 0;
}