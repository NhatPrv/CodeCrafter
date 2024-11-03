#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;   cin >> s;
    for (char c : s) {
        if (c >= '0' && c <= '9') continue;
        cout << c;
    }

    return 0;
}