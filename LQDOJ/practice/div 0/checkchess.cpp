#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

    //  code by #CodeCrafters_Nholl (danglongnhat)

int main () {
    int t;  cin >> t;
    while (t--) {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        if (x == a || y == b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}