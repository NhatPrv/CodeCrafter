#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long sum = 0;
    while (true) {
        long long n = -1;
        cin >> n;
        if (n == 0) break;
        else sum += n;
    }
    cout << sum;

    return 0;
}