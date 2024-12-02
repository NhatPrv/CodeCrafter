#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    if (n % 400 == 0 || (n%4==0 && n%100!=0)) cout << "Nam nhuan";
    else cout << "Khong la nam nhuan";

    return 0;
}