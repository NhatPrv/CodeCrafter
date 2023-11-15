#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;    cin >> n;
    int pos=0, nega=0;
    for (int i=0;i<n;i++) {
        long long x;    cin >> x;
        if (x > 0) pos++;
        else if (x < 0) nega++;
    }
    cout << nega << " " << pos;

    return 0;
}