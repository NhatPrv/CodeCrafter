#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;   cin >> s;
    int count = 1;
    map<char, int> dem;
    for (char c : s) {
        if (dem[c] == 1) {
            count++;
            dem.clear();

        }
        dem[c]++;
    }
    cout << count;

    return 0;
}