#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long a, b, c;
    cin >> a >> b >> c;
    if (a == b || b == c || a == c) cout <<  "NO";
    else if (a + b <= c || a + c <= b || b + c <= a) cout << "NO";
    else cout << "YES";

    return 0;
}