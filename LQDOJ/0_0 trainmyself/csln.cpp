#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    int ans = n%10;
    n/=10;
    while (n > 0) {
        if (n%10 > ans) ans = n%10;
        n /= 10;
    }
    cout << ans;
    return 0;
}