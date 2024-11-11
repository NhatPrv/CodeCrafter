#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int d, m, y;
    cin >> d >> m >> y;
    if (d == 20 && m == 11) {
        cout << "Chuc mung Ngay Nha giao Viet Nam 20/11";
    }
    else cout << "Ngay " << d << " thang " << m << " nam " << y;

    return 0;
}