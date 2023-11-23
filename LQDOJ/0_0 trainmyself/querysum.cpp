#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, q;   cin >> n >> q;
    vector<long long> a(n);
    vector<long long> prefix(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        if (i != 0) prefix[i] = prefix[i-1] + a[i];
        else prefix[i] = a[i];
    }
    while (q--) {
        long long type, left, right;
        cin >> type >> left >> right;
        if (type == 1) {
            a[left-1]+=right;
            for (long long i = left-1; i < n; i++) {
                prefix[i] += right;
            }
        }
        if (type == 2) {
            long long ans = 0;
            if (left == 1) ans = prefix[right-1];
            else ans = prefix[right-1] - prefix[left-2];
            cout << ans << '\n';
        }
    }
    return 0;
}