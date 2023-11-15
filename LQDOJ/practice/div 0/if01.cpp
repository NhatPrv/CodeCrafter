#pragma GCC optimize ("03,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

    //  code by #CodeCrafters_Nholl (danglongnhat)

void usingfile() {
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

void solve() {
    long long x;    cin >> x;
    if (x&1) cout << "NO";
    else cout << "YES";
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);   cout.tie(nullptr);

    //usingfile();
    solve();

    return 0;
}