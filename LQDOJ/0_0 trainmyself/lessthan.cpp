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
    vector<long long> copy(n);
    vector<long long> count(n,0);
    for (int i=0;i<n;i++) {
        cin >> arr[i];
        copy[i] = arr[i];
    }
    sort(copy.begin(), copy.end());
    for (int i=0;i<n;i++) {
        int index = lower_bound(copy.begin(), copy.end(), arr[i]) - copy.begin();
        cout << index << " ";
    }

    return 0;
}