#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    int count = 0;
    long long sum=0;
    for (int i=0;i<n;i++) {
        long long x;    cin >> x;
        if (x > 0) {
            count++;
            sum+=x;
        }
    }
    cout << count << " " << sum;
    return 0;
}