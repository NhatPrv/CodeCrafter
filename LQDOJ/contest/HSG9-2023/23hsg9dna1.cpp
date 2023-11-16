#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long x;    cin >> x;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x%i==0) {
            cout << x/i;
            return 0;
        }
    }
    cout << 1;
    return 0;

    return 0;
}