#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;   getline(cin, s);
    s+=" ";
    for (int i = 0; i < s.length()-1; i++) {
        if (s[i] == ' ' && s[i-1] == ' ') {
            continue;
        }
        else cout << s[i];
    } 
    cout << endl;

    return 0;
}