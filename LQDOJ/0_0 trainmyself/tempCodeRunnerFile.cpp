#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long a, b; cin >> a >> b;
    long long ans = a;
    while (b > 0) {
        if (b % 2 == 0) ans*=ans;
        else ans*=a;
        b/=2;
    }
    cout << ans << endl;

    return 0;
}