#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    int k;  cin >> k;
    vector<long long> v(n);
    for (long long &i : v) {
        cin >> i;
    }

    sort(v.begin(), v.end());
    cout << v[n-k];

    return 0;
}