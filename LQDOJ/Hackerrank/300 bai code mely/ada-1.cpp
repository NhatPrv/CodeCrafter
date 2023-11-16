#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;  cin >> t;
    while (t--)  {
        long long n; cin >> n;
        long long width = sqrt(n);
        if (width*width == n) {
            cout << width << " " << width << endl;
            continue;
        }
        long long height = width+1;
        for (;height < n; height++) {
            if (n%height == 0) break;
        }
        width = n/height;

        cout << width << " " << height << endl;
    }

    return 0;
}