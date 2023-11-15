#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)
bool nto(long long n) {
    if (n == 2 || n == 3) {
        return true;
    }
    if (n<2) return false;
    for (long long i=2;i<=sqrt(n);i++) {
        if (n%i==0) {
            return false;
        }
    }
    return true;
}

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;

    int count=2;
    int j;
    for (j=2;j<sqrt(n);j++) {
        if (n%j==0) count+=2;
    }
    if (j*j == n) count++;


    for (long long i=2;n>i && !nto(n);i++) {
        while (n%i==0 && !nto(n)) {
            cout << i << "*";
            n/=i;
        }
    }
    cout << n << endl << count;

    return 0;
}