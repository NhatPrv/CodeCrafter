#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    vector<int> A(n+1);
    for (int i = 0; i < n; i++) {
        int x;  cin >> x;
        A[x+1]++;
    }
    for (int i = 1; i < n; i++) {
        cout << i << " " << A[i] << endl;
    }

    return 0;
}