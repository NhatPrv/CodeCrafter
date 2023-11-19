#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string n;   cin >> n;
    int sum = 0;
    for (int i = 0; i < n.size(); i++) {
        sum += (n[i] - '0');
    }
    cout << n.size() << endl;
    cout << sum;

    return 0;
}