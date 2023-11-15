#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

    //  code by #CodeCrafters_Nholl (danglongnhat)

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);   cout.tie(nullptr);
    long long countPos = 0;
    long long countNega = 0;
    int n;  cin >> n;
    for (int i=0;i<n;i++) {
        int x;  cin >> x;
        if (x > 0) countPos++;
        else if (x < 0) countNega++;
    }
    cout << countPos*(countPos-1)/2 + countNega*(countNega-1)/2;
    return 0;
}