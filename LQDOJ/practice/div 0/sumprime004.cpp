#pragma GCC optimize ("03,unroll-loops")
#include <bits/stdc++.h>
#define ll long long
using namespace std;

    //  code by #CodeCrafters_Nholl (danglongnhat)

void solve() {
    int t;  cin >> t;
    vector<bool> isPrime(100000100, true);
    for (ll i=2; i*i <= sqrt(100000100); ++i) {
        if (isPrime[i]) {
            for (int j=i*i; j<=100000100; j+= i) {
                isPrime[j] = false;
            }
        }
    }
    vector<ll> prefixSum(1, 0);
    for (ll i=2;i<100000100,prefixSum.size()<1000002;i++) {
        if (isPrime[i]) {
            prefixSum.push_back(prefixSum[prefixSum.size()-1] + i);
        }
    }
    while (t--) {
        ll n;   cin >> n;
        cout << prefixSum[n] << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);   cout.tie(nullptr);

    solve();

    return 0;
}