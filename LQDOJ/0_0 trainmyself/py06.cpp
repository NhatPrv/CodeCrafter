#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    float a, b;     cin >> a >> b;
    cout << "DT: " << fixed << setprecision(2) << a*b << endl;
    cout << "CV: " << fixed << setprecision(2) << 2*(a+b);
    
    return 0;
}