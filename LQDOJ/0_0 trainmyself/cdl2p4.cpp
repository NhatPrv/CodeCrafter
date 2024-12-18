#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long a, b; cin >> a; cin >> b; 
    if (a + b < 0) cout << "Tong am";
    else cout << "Tong duong";

    return 0;
}