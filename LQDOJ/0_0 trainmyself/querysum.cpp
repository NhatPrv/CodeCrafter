#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, q;
    cin >> n >> q;
    vector<long long> a(n+1);
    vector<long long> prefix(n+1);
    prefix[0] = 0;
    for (long long i = 1; i <= n; i++) {
        cin >> a[i];
        prefix[i] = prefix[i-1] + a[i];
    }

    while (q--) {
        int type;   cin >> type;
        if (type == 1) {
            long long index, value;
            cin >> index >> value;
            for (long long i = index; i <= n; i++) {
                prefix[i] += value;
            }
        }
        else {
            long long left, right;
            cin >> left >> right;
            cout << prefix[right] - prefix[left-1] << '\n';
        }
    }

    return 0;
}
