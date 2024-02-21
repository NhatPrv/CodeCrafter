#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    if (n < 2) cout << "NO";
    else {
        if (n == 2 || n == 3) cout << "YES";
        else {
            for (long long i = 2; i*i <= n; i++) {   
                if (n % i == 0) {
                    cout << "NO";
                    return 0;
                }
            }
            cout << "YES";
        }
    }

    return 0;
}