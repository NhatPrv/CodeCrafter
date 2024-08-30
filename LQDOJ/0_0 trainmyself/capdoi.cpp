#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, x; 
    cin >> n >> x;
    map<long long, int> mp;
    for (int i=0;i<n;i++) {
        long long x;    cin >> x;
        mp[x]++;
    }

    long long ans = 0;
    for (auto i : mp) {
        long long target = x - i.first;
        if (mp.find(target) != mp.end()) {
            if (target == i.first) {
                ans += ((i.second) * (i.second - 1) / 2);
            } else {
                ans += (i.second * mp[target]);
            }
        }
        ans/=2;
    }
    cout << ans;

    return 0;
}