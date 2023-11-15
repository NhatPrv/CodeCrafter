#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    vector<ll> prefixAnd(n,0);
    vector<ll> prefixXor(n,0);
    vector<ll> arr(n);
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    for (int i=1;i<n;i++) {
        prefixAnd[i] = perfix[i-1] + (arr[i-1]&arr[i])
    }

    return 0;
}