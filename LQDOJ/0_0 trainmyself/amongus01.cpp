#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    vector<long long> a(n);
    long long sum = 0;
    for (int i=0;i<n;i++) {
        cin >> a[i];
        sum += a[i];
    }
    for (int i=0;i<n;i++) {
        cout << sum - a[i] << " ";
    }

    return 0;
}