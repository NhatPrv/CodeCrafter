#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;   cin >> s;
    for (int i = 0; i < s.length()/2; i++) {
        if (s[i] != s[s.length() - 1 - i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}