#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    vector<long long> arr(n);
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int count = 0;
    for (int i=1;i<n;i++) {
        if (arr[i] == arr[i-1]) count++;
    }
    cout << count;

    return 0;
}