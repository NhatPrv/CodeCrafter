#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

void sieveOfEratosthenes(int n, vector<bool> v) {
    n++;
    v[0] = v[1] = false;
    for (int i = 2; i < n; i++) {
        if (v[i]) {
            for (int j = i*i; j <= n; j+=i) {
                v[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (v[i]) cout << i << endl;
    }
}

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    vector<bool> v(n+1, true);

    sieveOfEratosthenes(n, v);

    return 0;
}