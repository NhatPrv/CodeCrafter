#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double r;   cin >> r;
    cout << fixed << setprecision(1) << 2*r*3.14 << endl; 
    cout << fixed << setprecision(1) << r*r*3.14;

    return 0;
}