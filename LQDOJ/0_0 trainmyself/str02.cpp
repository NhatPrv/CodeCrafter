#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;   getline(cin, s);
    int ans = 0;
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == ' ') ans++;
    }
    cout << ans;

    return 0;
}