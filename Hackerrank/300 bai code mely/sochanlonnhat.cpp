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
    vector<ll> a(n);
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll maxEven1 = 0, maxEven2 = 0;
    ll maxOdd1 = 0, maxOdd2 = 0;
    for(int i = n-1;i>=0;i--) {
        if (maxEven1 != 0 && maxEven2 != 0 && maxOdd1 != 0 && maxOdd2 != 0) break;
        if (a[i]&1) {
            if (maxOdd1 == 0) maxOdd1 = a[i];
            else if (maxOdd2 == 0) maxOdd2 = a[i];
        }
        else {
            if (maxEven1 == 0) maxEven1 = a[i];
            else if (maxEven2 == 0) maxEven2 = a[i];
        }
    }
    if (maxEven1 + maxEven2 > maxOdd1 + maxOdd2) {
        if (maxEven1 == 0 || maxEven2 == 0) {
            cout << -1;
            return 0;
        }
    } 

        if (maxOdd1 == 0 || maxOdd2 == 0) {
            cout << -1;
            return 0;
        }

    ll big = (maxEven1+maxEven2 > maxOdd1+maxOdd2)?(maxEven1+maxEven2):(maxOdd1+maxOdd2);
    cout << big;

    return 0;
}