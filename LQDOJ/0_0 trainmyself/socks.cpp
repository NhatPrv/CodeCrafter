#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;    cin >> n;
    map<long long, int> mp;
    for (int i = 0; i < n; i++) {
        long long x;    cin >> x;
        mp[x]++;
    }
    long long count = 0;
    for (int i=0;i<mp.size();i++) {
        count += mp[i]/2;
    }
    cout << count;

    return 0;
}