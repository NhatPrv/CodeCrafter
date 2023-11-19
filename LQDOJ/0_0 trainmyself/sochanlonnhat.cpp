#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;  cin >> n;
    vector<ll> odd;
    vector<ll> even;
    for (int i=0;i<n;i++) {
        ll x;   cin >> x;
        if (x & 1) odd.push_back(x);
        else even.push_back(x);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    if (odd.size() < 2 && even.size() > 1) cout << even[even.size() - 1] + even[even.size() - 2];
    else if (even.size() < 2 && odd.size() > 1) cout << odd[odd.size() -1] + odd[odd.size() - 2];
    else if (odd.size() > 1 && even.size() > 1) {
        ll big = (odd[odd.size() -1] + odd[odd.size() - 2] > even[even.size() - 1] + even[even.size() - 2]) ?
         odd[odd.size() -1] + odd[odd.size() - 2] : even[even.size() - 1] + even[even.size() - 2];
        cout << big;
    }
    else if (odd.size() < 2 && even.size() < 2) cout << -1;

    return 0;
}