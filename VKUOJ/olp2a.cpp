#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a/c == b/d || a/d == b/c) cout << "YES";
    else cout << "NO";

    return 0;
}