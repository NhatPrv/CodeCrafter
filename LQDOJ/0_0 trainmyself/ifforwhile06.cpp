#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double a, b, c; 
    cin >> a >> b >> c;
    double sum = (a*2 + b*2+ c)/5;
    if (sum >= 8.0) cout << "gioi";
    else if (sum >= 6.5) cout << "kha banh";
    else if (sum > 5.0) cout << "trung binh";
    else cout << "yeu";

    return 0;
}