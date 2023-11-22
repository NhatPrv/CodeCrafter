#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;  cin >> n;
    double sum = 0;
    long long dem = 0;
    for (long long i = 0; i < n; i++) {
        long long x;  cin >> x;
        if (x < 0) {
            sum += x;
            dem++;
        }
    }
    if (dem == 0) {
        cout << -1;
        return 0;
    }
    double ans = sum/dem;
    cout << fixed << setprecision(2) << ans;

    return 0;
}