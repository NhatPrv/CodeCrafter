#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;   cin >> s;
    vector<int> v(26);
    for (int i = 0; i < s.size(); i++) {
        v[((int)s[i])-97]++;
    }
    int cnt = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 1) cnt ++;
    }

    cout << cnt;

    return 0;
}