#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;  cin >> n;
    long long t;  cin >> t;
    vector<long long> arr(n+1);
    for (long long i=1;i<=n;i++) {
        cin >> arr[i];
    }

    while (t--) { 
        long long i, j;
        cin >> i >> j;
        long long max = arr[i], max2 = arr[j];
        if (max < max2) swap(max, max2);
        for (i=i+1;i<j;i++) {
            if (arr[i] > max) {
                max2 = max;
                max = arr[i];
            }
            else if (arr[i] > max2) {
                max2 = arr[i];
            }
        }
        cout << max+max2 << endl;
    }

    return 0;
}