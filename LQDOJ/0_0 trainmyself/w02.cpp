#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}