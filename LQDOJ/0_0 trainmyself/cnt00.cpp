#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, x;
    cin >> n >> x;
    map<int, int> mp;
    while (n--) {
        long long tmp;  cin >> tmp;
        mp[tmp]++;
    }
    cout << mp[x];

    return 0;
}