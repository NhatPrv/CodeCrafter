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
    ll a, b, c;
    cin >> a >> b >> c;
    cout << max(a, max(b,c)) << " " << max(min(a,b), min(b,c)) << " " << min(a,min(b,c));
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);   cout.tie(nullptr);

    //usingfile();
    solve();

    return 0;
}