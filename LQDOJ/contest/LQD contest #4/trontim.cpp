#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m, n; cin >> m >> n;
    vector<int> dem(n,0);
    for (int i=0;i<m;i++) {
        string s;   cin >> s;
        for (int i=0;i<s.size();i++) {
            if (s[i] == 'O') dem[i]++;
        }
    }
    for (int i=0;i<n;i++) {
        cout << dem[i] << " ";
    }

    return 0;
}