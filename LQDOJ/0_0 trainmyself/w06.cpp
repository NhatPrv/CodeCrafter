#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, m; cin >> n >> m;
    long long small = (n<m)?n:m;
    for (int i = 1; i < small; i++) {
        if (n % i == 0 && m % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}