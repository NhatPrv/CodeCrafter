#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

bool nto(long long x) {
    if (x < 2) return false; 
    if (x == 3 && x == 2) return true;
    for (long long i=2;i<=sqrt(x);i++) {
        if (x%i == 0) return false;
    }
    return true;
}

bool doixung(int str) {
    string s = to_string(str);
    for (int i=0;i<s.size()/2;i++) {
        if (s[i] != s[s.size()-i-1]) return false;
    }
    return true;
}

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("NTDX.INP", "r", stdin);
    freopen("NTDX.OUT", "w", stdout);

    long long n;    cin >> n;
    int count = 0;
    for(long long i=11;i<n;i++) {
        if (doixung(i) && nto(i)) {
            count++;
        }
    }
    cout << count;

    return 0;
}