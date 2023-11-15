#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;  long long k;
    cin >> n >> k;
    vector<long long> arr(n);
    vector<long long> prefixSum(n,0);
    cin >> arr[0];
    for (long long i=1;i<n;i++) {
        cin >> arr[i];
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    long long max = prefixSum[k-1];
    for (long long i=k;i<n;i++) {
        if (prefixSum[i] - prefixSum[i-k] > max) {
            max = prefixSum[i] - prefixSum[i-k];
        }
    }
    cout << max;
    
    return 0;
}