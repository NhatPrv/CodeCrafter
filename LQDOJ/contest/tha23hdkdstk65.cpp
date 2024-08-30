#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    if (n < 5) {
        cout << n*2 - 2 ;
        return 0;
    }
    else cout << n*2 - 1;

    return 0;
}