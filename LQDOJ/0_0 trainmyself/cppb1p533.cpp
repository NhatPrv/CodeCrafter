#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    for (int i = 0; i < n; i++) {
        long long val = 1;;
        for (int j = 0; j <= i; j++) {
            cout << val << " ";
            val = val * (i - j)/(j + 1);
        }
        cout << endl;
    }

    return 0;
}