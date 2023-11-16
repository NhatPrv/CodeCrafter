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
    if (n < 3) {
        if (n == 2) {
            cout << 2;
            return 0;
        }
        if (n == 1) {
            cout << 1;
            return 0;
        }
    }
    if (n % 2 == 0) {
        cout << n*(n-1)*(n-3);
    }
    else {
        cout << n*(n-1)*(n-2);
    }

    return 0;
}