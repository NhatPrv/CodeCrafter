#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long a, b; 
    cin >> a >> b;
    if (a % b == 0 || b % a == 0) 
        cout << (a > b)?(cout << a): (cout << b);
    else {
        while (a != b) {
            if (a > b) a -= b;
            else b-=a;
        }
        cout << a;
    }

    return 0;
}