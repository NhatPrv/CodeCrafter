#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;   cin >> s;
    for (long long i = s.length()-1; i >= 0; i--) {
        if (s[i] == '0') {
            cout << i + 1;
            break;
        }
    }

    return 0;
}