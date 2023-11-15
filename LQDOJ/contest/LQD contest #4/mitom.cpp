#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    vector<int> arr(n-1);
    for (int i=0;i<n-1;i++) {
        cin >> arr[i];
    }
    long long count = 1;
    for (int i=0;i<n-2;i++) {
        if (arr[i] < arr[i+1]) count += arr[i+1];
        else count += arr[i];
    }
    cout << count;

    return 0;
}