#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if (s1.size() > s2.size()) cout << s1.size() - s2.size();
    else cout << s2.size() - s1.size();

    return 0;
}