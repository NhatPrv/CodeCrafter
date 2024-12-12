#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    vector<int> A(1000006);
    for (int i = 0; i < n; i++) {
        int x;  cin >> x;
        A[x]++;
    }
    for (int i = 1; i <= 1000006; i++) {
        if (A[i] != 0) cout << i << " " << A[i] << endl;
    }

    return 0;
}