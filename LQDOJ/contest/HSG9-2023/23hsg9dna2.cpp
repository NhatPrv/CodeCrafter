#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;   cin >> s;
    map<char, int> count;
    for (char c : s) {
        count[c]++;
    }
    int dem = count_if(count.begin(), count.end(), [](const auto& element) {
        return element.second > 1;
    });
    cout << dem;
    return 0;
}