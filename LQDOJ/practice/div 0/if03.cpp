#pragma GCC optimize ("03,unroll-loops")
#include <bits/stdc++.h>
#define ll long long
using namespace std;

    //  code by #CodeCrafters_Nholl (danglongnhat)

void usingfile() {
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min(min(min(a,b),c),d);
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);   cout.tie(nullptr);

    //usingfile();
    solve();

    return 0;
}