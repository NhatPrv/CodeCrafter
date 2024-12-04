#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    long long sum=0; 
    for (long long i = 1; i <= n; i++) {
        sum += i * i * i;
    }
    cout << sum;
    
    return 0;
}