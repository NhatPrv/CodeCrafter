#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)
long long max(long long a, long long b) {
    a = (a>b) ? a : b;
    return a;
}

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long a, b, c;  cin >> a >> b >> c;
    cout << max(a, max(b, c));

    return 0;
}